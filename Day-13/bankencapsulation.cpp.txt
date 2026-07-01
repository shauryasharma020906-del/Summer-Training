#include <iostream>
using namespace std;

class BankAccount {
private:
    int totalFunds;

public:
    BankAccount() {
        totalFunds = 0;
    }

    void deposit(int val) {
        totalFunds += val;
    }

    int getBalance() {
        return totalFunds;
    }
};

int main() {
    BankAccount userAcc;
    userAcc.deposit(1200);
    cout << "Funds available -> " << userAcc.getBalance() << "\n";
    return 0;
}