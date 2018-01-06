#include <cassert>
#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    string isbn() const {
        return bookNo;
    }

    void combine(const Sales_data& other) {
        assert(isbn() == other.isbn());
        units_sold += other.units_sold;
        revenue += other.revenue;
    }
};

istream &read(istream &in, Sales_data &item) {
    double price;
    in >> item.bookNo >> item.units_sold >> price;
    item.revenue = item.units_sold * price;
    return in;
}

ostream &print(ostream &out, const Sales_data &item) {
    out << item.bookNo << " " << item.units_sold << " "
        << item.revenue << " " << item.revenue / item.units_sold;
    return out;
}

int main()
{
    Sales_data total;
    if (read(cin, total)) {
        Sales_data trans;
        while (read(cin, trans)) {
            if (total.isbn() == trans.isbn())
                total.combine(trans);
            else {
                print(cout, total) << endl;
                total = trans;
            }
        }
        print(cout, total) << endl;
    } else {
        cerr << "No data?!" << endl;
    }
    return 0;
}
