#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Array length: ";
    cin >> len;
    
    int vals[100];
    cout << "Input elements: ";
    for (int a = 0; a < len; a++) {
        cin >> vals[a];
    }
    
    int* ptr = vals;
    int largest = *ptr;
    
    for (int b = 1; b < len; b++) {
        ptr++;
        if (*ptr > largest) {
            largest = *ptr;
        }
    }
    
    cout << "Max element: " << largest << "\n";
    return 0;
}