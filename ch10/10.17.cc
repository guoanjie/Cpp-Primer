#include <fstream>
#include <iostream>
#include <string>
#include <vector>

struct Sales_data;
std::istream &read(std::istream &, Sales_data &);

struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string &s): bookNo(s) { }
    Sales_data(const std::string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) { }
    Sales_data(std::istream &is) {
        read(is, *this);
    }

    std::string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

double Sales_data::avg_price() const {
    if (units_sold)
        return revenue / units_sold;
    else
        return 0;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data sum = lhs;
    sum.combine(rhs);
    return sum;
}

std::istream &read(std::istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main(int argc, char *argv[]) {
    std::vector<Sales_data> vsd;
    Sales_data trans(std::cin);
    while (std::cin) {
        vsd.push_back(trans);
        read(std::cin, trans);
    }
    sort(vsd.begin(), vsd.end(),
            [](const Sales_data &trans1, const Sales_data &trans2)
                 { return trans1.isbn() < trans2.isbn(); });
    for (auto trans : vsd)
        print(std::cout , trans) << std::endl;
    return 0;
}
