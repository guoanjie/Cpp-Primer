#include <iostream>
#include <numeric>
#include <stack>
#include <string>
#include <vector>

std::string eval(const std::string &expr) {
    auto pos = expr.find_last_of("+-");
    if (pos == std::string::npos || pos == 0)
        return expr;
    else {
        if (expr[pos - 1] == '+' || expr[pos - 1] == '-')
            --pos;
        int val = stoi(eval(expr.substr(0, pos)));
        int rhs = stoi(expr.substr(pos + 1));
        if (expr[pos] == '+')
            val += rhs;
        else
            val -= rhs;
        return std::to_string(val);
    }
}

std::string evalParenth(const std::string &expr) {
    std::stack<std::string> ss;
    for (auto c : "(" + expr + ")") {
        if (c == ')') {
            std::vector<std::string> vs;
            auto s = ss.top();
            ss.pop();
            while (s != "(") {
                vs.push_back(s);
                s = ss.top();
                ss.pop();
            }
            std::string sub = std::accumulate(vs.crbegin(), vs.crend(), std::string(""));
            ss.push(eval(sub));
        } else
            ss.push(std::string(1, c));
    }
    return ss.top();
}

int main() {
    std::string expr;
    while (getline(std::cin, expr))
        std::cout << evalParenth(expr) << std::endl;
    return 0;
}
