#include <iostream>
#include <map>
using namespace std;

int main() {
    int size;
    cout << "Size of array: ";
    cin >> size;
    
    map<int, int> countMap;
    cout << "Input values: ";
    for (int j = 0; j < size; j++) {
        int item;
        cin >> item;
        countMap[item]++;
    }
    
    int queries;
    cout << "How many lookups? ";
    cin >> queries;
    
    for (int j = 0; j < queries; j++) {
        int target;
        cout << "Lookup target: ";
        cin >> target;
        cout << "Count for " << target << " is " << countMap[target] << "\n";
    }
    
    return 0;
}