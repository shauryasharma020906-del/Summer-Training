#include <iostream>
using namespace std;

void printTotal(int x, int y) {
    cout << "The total is " << x + y << "\n";
}

int main() {
    int val1, val2;
    cout << "Input first value: ";
    cin >> val1;
    cout << "Input second value: ";
    cin >> val2;
    
    printTotal(val1, val2);
    return 0;
}