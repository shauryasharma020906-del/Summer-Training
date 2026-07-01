#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Input N: ";
    cin >> limit;
    
    int i = 1;
    while (i <= limit) {
        cout << i << "\n";
        i++;
    }
    
    return 0;
}