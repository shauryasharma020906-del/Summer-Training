#include <iostream>
using namespace std;

int main() {
    int a, b, c, maxVal;
    cout << "Input 3 integers separated by spaces: ";
    cin >> a >> b >> c;
    
    maxVal = a;
    
    if (b > maxVal) {
        maxVal = b;
    }
    if (c > maxVal) {
        maxVal = c;
    }
    
    cout << "The maximum value is " << maxVal << "\n";
    
    return 0;
}