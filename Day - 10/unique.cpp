#include <iostream>
#include <set>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    set<int> mySet;
    
    cout << "Input data: ";
    for (int j = 0; j < size; j++) {
        int temp;
        cin >> temp;
        mySet.insert(temp);
    }
    
    cout << "Output: ";
    for (int num : mySet) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}