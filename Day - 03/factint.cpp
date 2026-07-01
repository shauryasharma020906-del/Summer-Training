#include <iostream>
using namespace std;

int main() {
    int num;
    long long f = 1;
    
    cout << "Input number to find factorial: ";
    cin >> num;
    
    int original = num;
    while (num > 1) {
        f *= num;
        num--;
    }
    
    cout << original << "! = " << f << "\n";
    return 0;
}