#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Input a number to check for prime: ";
    cin >> num;
    
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    
    if (count == 2) {
        cout << "Result: Prime\n";
    } else {
        cout << "Result: Not Prime\n";
    }
    
    return 0;
}