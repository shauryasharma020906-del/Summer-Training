#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string input;
    cout << "Input text: ";
    cin >> input;
    
    map<char, int> charCounts;
    for (char ch : input) {
        charCounts[ch]++;
    }
    
    bool isPresent = false;
    for (char ch : input) {
        if (charCounts[ch] == 1) {
            cout << "First unique character is: " << ch << "\n";
            isPresent = true;
            break;
        }
    }
    
    if (isPresent == false) {
        cout << "All characters repeat.\n";
    }
    
    return 0;
}