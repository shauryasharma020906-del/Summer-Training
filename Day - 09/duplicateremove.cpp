#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    vector<int> vec;
    vector<int> result;
    
    cout << "Input data: ";
    for (int a = 0; a < size; a++) {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    
    result.push_back(vec[0]);
    for (int b = 1; b < vec.size(); b++) {
        if (vec[b] != vec[b - 1]) {
            result.push_back(vec[b]);
        }
    }
    
    cout << "Cleaned vector: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}