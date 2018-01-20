#include <fstream>
#include <iostream>
#include <map>
#include <memory>
#include <set>
#include <sstream>
#include <string>
#include <vector>

class QueryResult;

class TextQuery {
public:
    TextQuery(std::ifstream &);
    QueryResult query(std::string);
private:
    std::shared_ptr<std::vector<std::string>> input;
    std::map<std::string, std::shared_ptr<std::set<int>>> line_numbers;
};

TextQuery::TextQuery(std::ifstream &infile) {
    input = std::make_shared<std::vector<std::string>>();
    for (std::string line; getline(infile, line);) {
        input->push_back(line);
        std::stringstream ss(line);
        for (std::string word; ss >> word;) {
            if (line_numbers.find(word) == line_numbers.end())
                line_numbers[word] = std::make_shared<std::set<int>>();
            line_numbers[word]->insert(input->size());
        }
    }
}

class QueryResult {
    friend std::ostream &print(std::ostream &, const QueryResult &);
public:
    QueryResult(
        const std::shared_ptr<std::vector<std::string>> i,
        std::string w,
        std::shared_ptr<std::set<int>> n
    ): input(i), word(w), line_numbers(n) { }
private:
    std::shared_ptr<std::vector<std::string>> input;
    std::shared_ptr<std::set<int>> line_numbers;
    std::string word;
};

QueryResult TextQuery::query(std::string s) {
    return {this->input, s, this->line_numbers[s]};
}

std::ostream &print(std::ostream &os, const QueryResult &qr) {
    auto line_numbers = qr.line_numbers ? qr.line_numbers : std::make_shared<std::set<int>>();
    os << qr.word << " occurs " << line_numbers->size() << (line_numbers->size() > 1 ? " times:" : " time:") << std::endl;
    for (auto n : *line_numbers)
        os << "\t(line " << n << ") " << (*qr.input)[n - 1] << std::endl;
    return os;
}

void runQueries(std::ifstream &infile) {
    TextQuery tq(infile);
    while (true) {
        std::cout << "enter word to look for, or q to quit: ";
        std::string s;
        if (!(std::cin >> s) || s == "q") break;
        print(std::cout, tq.query(s)) << std::endl;
    }
}

int main(int argc, char *argv[]) {
    std::ifstream infile(argv[1]);
    runQueries(infile);
    return 0;
}
