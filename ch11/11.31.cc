#include <iostream>
#include <map>
#include <string>

int main() {
    std::multimap<std::string, std::string> authors = {
        {"Joyce", "Ulysses"},
        {"Austen", "Pride Prejudice"},
        {"Austen", "Emma"},
        {"Dickens", "Oliver Twist"},
        {"Dickens", "David Copperfield"},
        {"Dickens", "A Tale of Two Cities"},
        {"Barth", "Sot-Weed Factor"},
        {"Barth", "Lost in the Funhouse"},
    };
    for (std::string author; std::cin >> author;)
        authors.erase(author);
    return 0;
}
