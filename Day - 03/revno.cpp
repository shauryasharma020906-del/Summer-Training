#include <iostream>
using namespace std;

int main() {
    int num, r = 0;
    cout << "Input a multi-digit number: ";
    cin >> num;
    
    for (; num > 0; num /= 10) {
        r = r * 10 + num % 10;
    }
    
    cout << "Reversed: " << r << "\n";
    return 0;
}