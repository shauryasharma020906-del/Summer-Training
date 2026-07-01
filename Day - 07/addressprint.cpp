#include <iostream>
using namespace std;

int main() {
    double number;
    cout << "Input a number: ";
    cin >> number;
    
    double* ptr = &number;
    
    cout << "Data: " << number << "\n";
    cout << "Location in memory: " << ptr << "\n";
    
    return 0;
}