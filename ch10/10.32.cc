#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>
#include "Sales_item.h"

int main() {
    std::istream_iterator<Sales_item> is_iter(std::cin), eof;
    std::vector<Sales_item> vsi(is_iter, eof);
    std::sort(vsi.begin(), vsi.end(),
            [](const Sales_item &lhs, const Sales_item &rhs)
            { return lhs.isbn() < rhs.isbn(); });
    std::ostream_iterator<Sales_item> os_iter(std::cout, "\n");
    for (auto beg = vsi.cbegin(), end = beg; beg != vsi.cend(); beg = end) {
        end = std::find_if_not(beg, vsi.cend(),
            [beg](const Sales_item &trans)
            { return compareIsbn(*beg, trans); });
        os_iter = std::accumulate(beg + 1, end, *beg);
    }
    return 0;
}
