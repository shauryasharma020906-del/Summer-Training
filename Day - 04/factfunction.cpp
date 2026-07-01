#include <iostream>
using namespace std;

long long calcFact(int val) {
    long long result = 1;
    while (val > 1) {
        result *= val;
        val--;
    }
    return result;
}

int main() {
    int x;
    cout << "Input number: ";
    cin >> x;
    
    cout << x << "! = " << calcFact(x) << "\n";
    return 0;
}