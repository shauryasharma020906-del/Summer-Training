#include <iostream>
using namespace std;

class Account {
    int bal;

public:
    Account() {
        bal = 0;
    }

    void deposit(int val) {
        bal += val;
    }

    void withdraw(int val) {
        if (val <= bal) {
            bal -= val;
        } else {
            cout << "Not enough balance\n";
        }
    }

    void display() {
        cout << "Current Balance: " << bal << "\n";
    }
};

int main() {
    Account myAcc;
    int addMoney, subMoney;

    cout << "Deposit value: ";
    cin >> addMoney;
    myAcc.deposit(addMoney);

    cout << "Withdraw value: ";
    cin >> subMoney;
    myAcc.withdraw(subMoney);

    myAcc.display();

    return 0;
}