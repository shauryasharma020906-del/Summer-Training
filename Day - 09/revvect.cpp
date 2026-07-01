#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    cout << "Vector size: ";
    cin >> count;
    
    vector<int> vec;
    cout << "Input items: ";
    for (int j = 0; j < count; j++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    
    int left = 0;
    int right = vec.size() - 1;
    while (left < right) {
        int t = vec[left];
        vec[left] = vec[right];
        vec[right] = t;
        left++;
        right--;
    }
    
    cout << "After reversing: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}