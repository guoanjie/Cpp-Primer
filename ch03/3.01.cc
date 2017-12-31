#include <cassert>
#include <iostream>
#include <string>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::string;

void ex1_09() {
    int sum = 0, val = 50;
    while (val <= 100) {
        sum += val;
        ++val;
    }
    cout << "Sum of 50 to 100 inclusive is "
         << sum << endl;
}

void ex1_10() {
    int val = 10;
    while (val >= 0)
        cout << val-- << " ";
    cout << endl;
}

void ex1_11() {
    cout << "Enter two numbers:" << endl;
    int v1 = 0, v2 = 0;
    cin >> v1 >> v2;
    while (v1 <= v2)
        cout << v1++ << " ";
    cout << endl;
}

struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void ex1_20() {
    Sales_data item;
    double price;
    while (cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        cout << item.bookNo << " " << item.units_sold << " "
             << item.revenue << " " << price << endl;
    }
}

void ex1_21() {
    Sales_data item1, item2;
    double price;
    cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;
    cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;
    assert(item1.bookNo == item2.bookNo);
    Sales_data item;
    item.bookNo = item1.bookNo;
    item.units_sold = item1.units_sold + item2.units_sold;
    item.revenue = item1.revenue + item2.revenue;
    cout << item.bookNo << " " << item.units_sold << " "
         << item.revenue << " " << item.revenue / item.units_sold << endl;
}

void ex1_22() {
    Sales_data total, trans;
    double price;
    cin >> total.bookNo >> total.units_sold >> price;
    total.revenue = total.units_sold * price;
    while (cin >> trans.bookNo >> trans.units_sold >> price) {
        trans.revenue = trans.units_sold * price;
        assert(total.bookNo == trans.bookNo);
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
    }
    cout << total.bookNo << " " << total.units_sold << " "
         << total.revenue << " " << total.revenue / total.units_sold << endl;
}

void ex1_23() {
    Sales_data currItem, item;
    double price;
    if (cin >> currItem.bookNo >> currItem.units_sold >> price) {
        currItem.revenue = currItem.units_sold * price;
        int cnt = 1;
        while (cin >> item.bookNo >> item.units_sold >> price) {
            item.revenue = item.units_sold * price;
            if (item.bookNo == currItem.bookNo)
                ++cnt;
            else {
                cout << currItem.bookNo << " occurs "
                     << cnt << " times" << endl;
                currItem = item;
                cnt = 1;
            }
        }
        cout << currItem.bookNo << " occurs "
             << cnt << " times" << endl;
    }
}

void ex1_25() {
    Sales_data total;
    double price;
    if (cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                cout << total.bookNo << " " << total.units_sold << " "
                     << total.revenue << " " << total.revenue / total.units_sold << endl;
                total = trans;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " "
             << total.revenue << " " << total.revenue / total.units_sold << endl;
    } else {
        cerr << "No data?!" << endl;
    }
}

void ex2_41() {
    // ex1_20();
    // ex1_21();
    // ex1_22();
    // ex1_23();
    ex1_25();
}

int main()
{
    // ex1_09();
    // ex1_10();
    // ex1_11();
    ex2_41();
    return 0;
}
