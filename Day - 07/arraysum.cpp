#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;
    
    int data[100];
    cout << "Input values: ";
    for (int j = 0; j < size; j++) {
        cin >> data[j];
    }
    
    int total = 0;
    int* p = data;
    
    for (int k = 0; k < size; k++) {
        total += *p;
        p++;
    }
    
    cout << "Total = " << total << "\n";
    return 0;
}