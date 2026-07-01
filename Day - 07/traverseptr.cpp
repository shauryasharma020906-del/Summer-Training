#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    int data[100];
    cout << "Input data: ";
    for (int j = 0; j < size; j++) {
        cin >> data[j];
    }
    
    cout << "Output: ";
    int* p = data;
    while (size > 0) {
        cout << *p << " ";
        p++;
        size--;
    }
    cout << "\n";
    
    return 0;
}