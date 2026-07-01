#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Input text without spaces: ";
    cin >> text;
    
    map<char, int> frequencyMap;
    for (char ch : text) {
        frequencyMap[ch]++;
    }
    
    cout << "Frequency of each character:" << "\n";
    for (auto pair : frequencyMap) {
        cout << pair.first << " = " << pair.second << "\n";
    }
    
    return 0;
}