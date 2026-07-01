#include <iostream>
using namespace std;

int getSum(int x) {
    return (x != 0) ? x + getSum(x - 1) : 0;
}

int main() {
    int limit;
    cout << "Input limit for sum: ";
    cin >> limit;
    
    cout << "Total Sum = " << getSum(limit) << "\n";
    return 0;
}