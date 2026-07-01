#include <iostream>
using namespace std;

int main() {
    int x, y, z;
    cout << "Input X: ";
    cin >> x;
    cout << "Input Y: ";
    cin >> y;
    
    z = x;
    x = y;
    y = z;
    
    cout << "Swapped values - X is now " << x << " and Y is now " << y << "\n";
    return 0;
}