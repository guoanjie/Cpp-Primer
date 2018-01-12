#include <iostream>
#include <string>
#include <vector>

class Date {
public:
    Date(const std::string &);
    std::string str() {
        return std::to_string(month) + "/" + std::to_string(day) + "/" + std::to_string(year);
    }

private:
    static const std::vector<std::string> month_name;
    static const std::vector<std::string> month_abbr;
    static const std::string ascii_letters;
    static const std::string digits;
    unsigned year;
    unsigned month;
    unsigned day;
};

const std::vector<std::string> Date::month_name = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
const std::vector<std::string> Date::month_abbr = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
const std::string Date::ascii_letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
const std::string Date::digits = "0123456789";

Date::Date(const std::string &s) {
    auto pos = s.find_first_not_of(ascii_letters + digits);
    std::string month_str(s, 0, pos);
    auto it = find(month_name.cbegin(), month_name.cend(), month_str);
    if (it != month_name.cend())
        month = it - month_name.cbegin() + 1;
    else {
        it = find(month_abbr.cbegin(), month_abbr.cend(), month_str);
        if (it != month_abbr.cend())
            month = it - month_abbr.cbegin() + 1;
        else
            month = stoi(month_str);
    }
    auto beg = s.find_first_of(digits, pos);
    auto end = s.find_first_not_of(digits, beg);
    std::string day_str(s, beg, end - beg);
    day = stoi(day_str);
    beg = s.find_first_of(digits, end);
    std::string year_str(s, beg);
    year = stoi(year_str);
}

int main() {
    Date d1("January 1, 1900");
    Date d2("1/1/1900");
    Date d3("Jan 1, 1900");
    std::cout << d1.str() << std::endl;
    std::cout << d2.str() << std::endl;
    std::cout << d3.str() << std::endl;
    return 0;
}
