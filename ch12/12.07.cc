#include <iostream>
#include <memory>
#include <vector>

std::shared_ptr<std::vector<int>> allocate() {
    return std::make_shared<std::vector<int>>();
}

void read(std::shared_ptr<std::vector<int>> pvi) {
    for (int i; std::cin >> i;)
        pvi->push_back(i);
}

void print(const std::shared_ptr<std::vector<int>> pvi) {
    for (const auto &i : *pvi)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main() {
    auto pvi = allocate();
    read(pvi);
    print(pvi);
    return 0;
}
