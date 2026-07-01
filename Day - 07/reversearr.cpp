#include <iostream>
using namespace std;

void reverseWithPointers(int* ptr, int size) {
    int* left = ptr;
    int* right = ptr + size - 1;
    
    while (left < right) {
        int t = *left;
        *left = *right;
        *right = t;
        left++;
        right--;
    }
}

int main() {
    int len;
    cout << "Input length: ";
    cin >> len;
    
    int nums[100];
    cout << "Input values: ";
    for (int j = 0; j < len; j++) cin >> *(nums + j);
    
    reverseWithPointers(nums, len);
    
    cout << "Reversed: ";
    for (int j = 0; j < len; j++) cout << nums[j] << " ";
    cout << "\n";
    
    return 0;
}