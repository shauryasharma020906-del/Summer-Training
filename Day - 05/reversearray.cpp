#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Enter array length: ";
    cin >> len;
    
    int sequence[100];
    cout << "Input the numbers: \n";
    for (int a = 0; a < len; a++) {
        cin >> sequence[a];
    }
    
    cout << "Reversed Output:\n";
    for (int b = len - 1; b >= 0; b--) {
        cout << sequence[b] << "\n";
    }
    
    return 0;
}