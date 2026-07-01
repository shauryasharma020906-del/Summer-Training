#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Input array size: ";
    cin >> size;
    
    int nums[100];
    cout << "Input array elements: ";
    for (int j = 0; j < size; j++) {
        cin >> nums[j];
    }
    
    int largest = nums[0];
    for (int k = 1; k < size; k++) {
        if (nums[k] > largest) {
            largest = nums[k];
        }
    }
    
    int sec_largest = -999999;
    for (int k = 0; k < size; k++) {
        if (nums[k] != largest && nums[k] > sec_largest) {
            sec_largest = nums[k];
        }
    }
    
    cout << "The second largest value is " << sec_largest << "\n";
    return 0;
}