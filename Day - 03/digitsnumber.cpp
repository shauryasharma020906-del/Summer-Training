#include <iostream>
using namespace std;

int main() {
    int num, c;
    cout << "Input number: ";
    cin >> num;
    
    if (num == 0) {
        c = 1;
    } else {
        for (c = 0; num > 0; num /= 10) {
            c++;
        }
    }
    
    cout << "Total digits = " << c << "\n";
    return 0;
}