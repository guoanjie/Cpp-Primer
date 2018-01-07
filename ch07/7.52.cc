#include <string>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold; // = 0;
    double revenue; // = 0.0;
};

int main() {
    Sales_data item = {"978-0590353403", 25, 15.99};
    return 0;
}
