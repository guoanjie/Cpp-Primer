#include <iostream>
#include <string>
using std::endl;
using std::istream;
using std::ostream;
using std::string;

struct Person {
    string getName() const { return name; }
    string getAddress() const { return address; }

    string name;
    string address;
};

istream &read(istream &is, Person &person) {
    getline(is, person.name);
    getline(is, person.address);
    return is;
}

ostream &print(ostream &os, const Person &person) {
    os << person.getName()<< endl
       << person.getAddress()<< endl;
    return os;
}

int main()
{
    return 0;
}
