#include <iostream>
using namespace std;

long long calcFact(int x) {
    return (x <= 1) ? 1 : x * calcFact(x - 1);
}

int main() {
    int val;
    cout << "Input number: ";
    cin >> val;
    
    cout << val << "! = " << calcFact(val) << "\n";
    return 0;
}