#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void elimDups(std::vector<std::string> &words) {
    std::sort(words.begin(), words.end());
    auto end_unique = std::unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

class Shorter {
public:
    bool operator()(const std::string &s1, const std::string &s2) const {
        return s1.size() < s2.size();
    }
};

class Longer {
public:
    Longer(size_t sz) : size(sz) { }
    bool operator()(const std::string &s) {
        return s.size() >= size;
    }

private:
    size_t size;
};

class PrintString {
public:
    PrintString(std::ostream &o = std::cout, char c = ' '):
        os(o), sep(c) { }
    void operator()(const std::string &s) const { os << s << sep; }

private:
    std::ostream &os;
    char sep;
};

void biggies(std::vector<std::string> &words,
             std::vector<std::string>::size_type sz) {
    elimDups(words);
    std::stable_sort(words.begin(), words.end(), Shorter());
    auto iter = std::find_if(words.cbegin(), words.cend(), Longer(sz));
    std::for_each(iter, words.cend(), PrintString());
}

int main() {
    std::istream_iterator<std::string> beg(std::cin), end;
    std::vector<std::string> words(beg, end);
    biggies(words, 7);
    return 0;
}
