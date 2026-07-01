#include <iostream>
#include <set>
using namespace std;

int main() {
    int sizeA, sizeB;
    set<int> combined;
    
    cout << "Size of A: ";
    cin >> sizeA;
    cout << "Data of A: ";
    for (int j = 0; j < sizeA; j++) {
        int temp;
        cin >> temp;
        combined.insert(temp);
    }
    
    cout << "Size of B: ";
    cin >> sizeB;
    cout << "Data of B: ";
    for (int j = 0; j < sizeB; j++) {
        int temp;
        cin >> temp;
        combined.insert(temp);
    }
    
    cout << "Union Result: ";
    for (int num : combined) {
        cout << num << " ";
    }
    cout << "\n";
    return 0;
}