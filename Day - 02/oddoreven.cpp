#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Input a number to check even/odd: ";
    cin >> n;
    
    (n % 2 == 0) ? cout << "Result: Even\n" : cout << "Result: Odd\n";
    
    return 0;
}