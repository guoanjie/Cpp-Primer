#include <string>

class Account {
public:
    void calculate() { amount += amount * interestRate; }
    static double rate() { return interestRate; }
    static void rate(double);

private:
    static constexpr int period = 30;
    double daily_tbl[period];
    std::string owner;
    double amount;
    static double interestRate;
    static double initRate();
};

constexpr int Account::period;
double Account::interestRate = initRate();

void Account::rate(double newRate) {
    interestRate = newRate;
}

double Account::initRate() {
    return 0;
}

int main() {
    Account ac;
    return 0;
}
