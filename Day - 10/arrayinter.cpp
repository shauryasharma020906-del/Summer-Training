#include <iostream>
#include <set>
using namespace std;

int main() {
    int sizeA, sizeB;
    set<int> setA, result;
    
    cout << "Size of array 1: ";
    cin >> sizeA;
    cout << "Input array 1: ";
    for (int j = 0; j < sizeA; j++) {
        int temp;
        cin >> temp;
        setA.insert(temp);
    }
    
    cout << "Size of array 2: ";
    cin >> sizeB;
    cout << "Input array 2: ";
    for (int j = 0; j < sizeB; j++) {
        int temp;
        cin >> temp;
        if (setA.count(temp)) {
            result.insert(temp);
        }
    }
    
    cout << "Common items: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}