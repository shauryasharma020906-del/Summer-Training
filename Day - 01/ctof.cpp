#include <iostream>
using namespace std;

int main() {
    float c, f;
    cout << "Celsius value: ";
    cin >> c;
    
    f = (c * 9.0 / 5.0) + 32;
    
    cout << "Fahrenheit equivalent: " << f << "\n";
    return 0;
}