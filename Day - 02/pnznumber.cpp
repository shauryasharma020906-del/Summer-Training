#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "Input any number: ";
    cin >> x;
    
    if (x == 0) {
        cout << "Value is exactly Zero\n";
    } else if (x > 0) {
        cout << "Value is Positive\n";
    } else {
        cout << "Value is Negative\n";
    }
    
    return 0;
}