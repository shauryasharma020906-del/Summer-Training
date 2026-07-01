#include <iostream>
using namespace std;

int main() {
    double a, b, ans;
    char choice;
    
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Choose operation (+, -, *, /): ";
    cin >> choice;
    
    switch (choice) {
        case '+': ans = a + b; break;
        case '-': ans = a - b; break;
        case '*': ans = a * b; break;
        case '/': ans = a / b; break;
        default: 
            cout << "Wrong operation\n"; 
            return 1;
    }
    
    cout << a << " " << choice << " " << b << " = " << ans << "\n";
    
    return 0;
}