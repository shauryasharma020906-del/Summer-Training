#include <iostream>
using namespace std;

int main() {
    int len;
    cout << "Array size: ";
    cin >> len;
    
    int vals[100];
    cout << "Provide the elements: ";
    for (int a = 0; a < len; a++) cin >> vals[a];
    
    int smallest = vals[0];
    for (int b = 1; b < len; b++) {
        if (vals[b] < smallest) smallest = vals[b];
    }
    
    cout << "Smallest number: " << smallest << "\n";
    return 0;
}