#include <iostream>
#include <vector>

std::vector<int> *allocate() {
    return new std::vector<int>;
}

void read(std::vector<int> *pvi) {
    for (int i; std::cin >> i;)
        pvi->push_back(i);
}

void print(const std::vector<int> *pvi) {
    for (const auto &i : *pvi)
        std::cout << i << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> *pvi = allocate();
    read(pvi);
    print(pvi);
    delete pvi;
    return 0;
}
