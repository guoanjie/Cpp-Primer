#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

class Sales_data;
istream &read(istream &, Sales_data &);

class Sales_data {
friend istream &read(istream &, Sales_data &);
friend ostream &print(ostream &, const Sales_data &);
public:
    Sales_data(const string &s, unsigned n, double p):
            bookNo(s), units_sold(n), revenue(p*n) {
        cout << "Sales_data(const string &, unsigned, double)" << endl;
    }
    Sales_data(const string &s): Sales_data(s, 0, 0) {
        cout << "Sales_data(const string &)" << endl;
    }
    Sales_data(): Sales_data("") {
        cout << "Sales_data()" << endl;
    }
    Sales_data(istream &is): Sales_data() {
        cout << "Sales_data(istream &)" << endl;
        read(is, *this);
    }

    string isbn() const { return bookNo; }
    Sales_data &combine(const Sales_data &);

private:
    double avg_price() const;

    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data &Sales_data::combine(const Sales_data &rhs) {
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}

inline double Sales_data::avg_price() const {
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

istream &read(istream &is, Sales_data &item) {
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;
    return is;
}

ostream &print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold << " "
       << item.revenue << " " << item.avg_price();
    return os;
}

int main()
{
    string bookNo = "0-201-70353-X";
    unsigned units_sold = 4;
    double price = 24.99;
    Sales_data s1(bookNo, units_sold, price);
    cout << endl;
    Sales_data s2(bookNo);
    cout << endl;
    Sales_data s3;
    cout << endl;
    Sales_data s4(cin);
    cout << endl;
    return 0;
}
