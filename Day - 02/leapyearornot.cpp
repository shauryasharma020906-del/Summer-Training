#include <iostream>
using namespace std;

int main() {
    int y;
    cout << "Input year to check: ";
    cin >> y;
    
    if (y % 4 == 0) {
        if (y % 100 == 0) {
            if (y % 400 == 0)
                cout << "Leap Year\n";
            else
                cout << "Not a Leap Year\n";
        } else {
            cout << "Leap Year\n";
        }
    } else {
        cout << "Not a Leap Year\n";
    }
    
    return 0;
}