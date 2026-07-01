#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    set<int> uniqueSet;
    vector<int> finalVec;
    
    cout << "Input items: ";
    for (int j = 0; j < size; j++) {
        int temp;
        cin >> temp;
        uniqueSet.insert(temp);
    }
    
    for (int num : uniqueSet) {
        finalVec.push_back(num);
    }
    
    cout << "Output array: ";
    for (int j = 0; j < finalVec.size(); j++) {
        cout << finalVec[j] << " ";
    }
    cout << "\n";
    return 0;
}