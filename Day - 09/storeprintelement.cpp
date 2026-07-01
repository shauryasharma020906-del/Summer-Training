#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    vector<int> vec;
    cout << "Input values: ";
    
    int j = 0;
    while (j < size) {
        int data;
        cin >> data;
        vec.push_back(data);
        j++;
    }
    
    cout << "Elements are: ";
    for (int num : vec) {
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}