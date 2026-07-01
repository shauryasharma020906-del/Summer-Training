#include <iostream>
#include <map>
using namespace std;

int main() {
    int size;
    cout << "Input array size: ";
    cin >> size;
    
    map<int, int> elementCounts;
    cout << "Input array items: ";
    for (int j = 0; j < size; j++) {
        int item;
        cin >> item;
        elementCounts[item]++;
    }
    
    cout << "Output Frequencies:" << endl;
    for (auto pair : elementCounts) {
        cout << pair.first << " -> " << pair.second << endl;
    }
    
    return 0;
}