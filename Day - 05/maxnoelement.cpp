#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "How many numbers? ";
    cin >> size;
    
    int numbers[100];
    cout << "Input numbers separated by space: ";
    int j = 0;
    while (j < size) {
        cin >> numbers[j];
        j++;
    }
    
    int largest = numbers[0];
    for (int k = 0; k < size; k++) {
        if (numbers[k] > largest) {
            largest = numbers[k];
        }
    }
    
    cout << "The largest value is " << largest << "\n";
    return 0;
}