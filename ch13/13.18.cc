#include <string>

class Employee {
public:
    Employee(const std::string &n = ""): name(n), id(++currId) { }
private:
    static int currId;
    std::string name;
    int id;
};

int Employee::currId = 0;

int main() {
    Employee e, d("Name");
    return 0;
}
