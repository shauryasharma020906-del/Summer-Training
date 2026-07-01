#include <iostream>
using namespace std;

int findHCF(int x, int y) {
    while (x != y) {
        if (x > y)
            x = x - y;
        else
            y = y - x;
    }
    return x;
}

int main() {
    int n1, n2;
    cout << "Input first integer: ";
    cin >> n1;
    cout << "Input second integer: ";
    cin >> n2;
    
    cout << "Highest Common Factor = " << findHCF(n1, n2) << "\n";
    return 0;
}