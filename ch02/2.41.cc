#include <cassert>
#include <iostream>
#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

void ex1_20() {
    Sales_data item;
    double price;
    while(std::cin >> item.bookNo >> item.units_sold >> price) {
        item.revenue = item.units_sold * price;
        std::cout << item.bookNo << " " << item.units_sold << " "
                  << item.revenue << " " << price << std::endl;
    }
}

void ex1_21() {
    Sales_data item1, item2;
    double price;
    std::cin >> item1.bookNo >> item1.units_sold >> price;
    item1.revenue = item1.units_sold * price;
    std::cin >> item2.bookNo >> item2.units_sold >> price;
    item2.revenue = item2.units_sold * price;
    assert(item1.bookNo == item2.bookNo);
    Sales_data item;
    item.bookNo = item1.bookNo;
    item.units_sold = item1.units_sold + item2.units_sold;
    item.revenue = item1.revenue + item2.revenue;
    std::cout << item.bookNo << " " << item.units_sold << " "
              << item.revenue << " " << item.revenue / item.units_sold << std::endl;
}

void ex1_22() {
    Sales_data total, trans;
    double price;
    std::cin >> total.bookNo >> total.units_sold >> price;
    total.revenue = total.units_sold * price;
    while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
        trans.revenue = trans.units_sold * price;
        assert(total.bookNo == trans.bookNo);
        total.units_sold += trans.units_sold;
        total.revenue += trans.revenue;
    }
    std::cout << total.bookNo << " " << total.units_sold << " "
              << total.revenue << " " << total.revenue / total.units_sold << std::endl;
}

void ex1_23() {
    Sales_data currItem, item;
    double price;
    if (std::cin >> currItem.bookNo >> currItem.units_sold >> price) {
        currItem.revenue = currItem.units_sold * price;
        int cnt = 1;
        while (std::cin >> item.bookNo >> item.units_sold >> price) {
            item.revenue = item.units_sold * price;
            if (item.bookNo == currItem.bookNo)
                ++cnt;
            else {
                std::cout << currItem.bookNo << " occurs "
                          << cnt << " times" << std::endl;
                currItem = item;
                cnt = 1;
            }
        }
        std::cout << currItem.bookNo << " occurs "
                  << cnt << " times" << std::endl;
    }
}

void ex1_25() {
    Sales_data total;
    double price;
    if (std::cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = total.units_sold * price;
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = trans.units_sold * price;
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                std::cout << total.bookNo << " " << total.units_sold << " "
                          << total.revenue << " " << total.revenue / total.units_sold << std::endl;
                total = trans;
            }
        }
        std::cout << total.bookNo << " " << total.units_sold << " "
                  << total.revenue << " " << total.revenue / total.units_sold << std::endl;
    } else {
        std::cerr << "No data?!" << std::endl;
    }
}

int main()
{
    // ex1_20();
    // ex1_21();
    // ex1_22();
    // ex1_23();
    // ex1_25();
    return 0;
}
