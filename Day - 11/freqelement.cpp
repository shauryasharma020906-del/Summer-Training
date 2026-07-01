#include <iostream>
#include <map>
using namespace std;

int main() {
    int size;
    cout << "Input size: ";
    cin >> size;
    
    map<int, int> counts;
    cout << "Input numbers: ";
    for (int j = 0; j < size; j++) {
        int temp;
        cin >> temp;
        counts[temp]++;
    }
    
    int highestFreq = 0;
    int resultElement = 0;
    
    for (auto pair : counts) {
        if (pair.second > highestFreq) {
            highestFreq = pair.second;
            resultElement = pair.first;
        }
    }
    
    cout << "Element with highest frequency: " << resultElement << "\n";
    return 0;
}