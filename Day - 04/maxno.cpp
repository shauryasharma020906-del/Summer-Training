#include <iostream>
using namespace std;

int getMax(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int n1, n2;
    cout << "Input number 1: ";
    cin >> n1;
    cout << "Input number 2: ";
    cin >> n2;
    
    cout << "The largest number is " << getMax(n1, n2) << "\n";
    return 0;
}