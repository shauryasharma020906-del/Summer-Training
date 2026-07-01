#include <iostream>
using namespace std;

int main() {
    int x, y;
    cout << "Input X and Y: ";
    cin >> x >> y;
    
    int* ptrX = &x;
    int* ptrY = &y;
    
    int temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
    
    cout << "Swapped: X=" << x << " Y=" << y << "\n";
    return 0;
}