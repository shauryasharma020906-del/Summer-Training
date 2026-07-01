#include <iostream>
using namespace std;

int main() {
    int num, total = 0;
    cout << "Input a number: ";
    cin >> num;
    
    while (num > 0) {
        total += num;
        num--;
    }
    
    cout << "Total Sum = " << total << "\n";
    return 0;
}