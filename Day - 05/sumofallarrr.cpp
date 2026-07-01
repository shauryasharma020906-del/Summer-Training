#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Input number of elements: ";
    cin >> size;
    
    int numbers[100];
    cout << "Input array values: ";
    for (int j = 0; j < size; j++) {
        cin >> numbers[j];
    }
    
    int total = 0;
    for (int k = 0; k < size; k++) {
        total = total + numbers[k];
    }
    
    cout << "The total sum is " << total << "\n";
    return 0;
}