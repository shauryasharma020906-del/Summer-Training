#include <iostream>
using namespace std;

int checkPrime(int val) {
    int count = 0;
    for (int i = 1; i <= val; i++) {
        if (val % i == 0) {
            count++;
        }
    }
    if (count == 2) return 1;
    return 0;
}

int main() {
    int x;
    cout << "Input a number to check: ";
    cin >> x;
    
    if (checkPrime(x) == 1) {
        cout << "Result: Prime\n";
    } else {
        cout << "Result: Not Prime\n";
    }
    return 0;
}