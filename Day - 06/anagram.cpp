#include <iostream>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    cout << "Input string 1: ";
    cin >> s1;
    cout << "Input string 2: ";
    cin >> s2;
    
    if (s1.length() != s2.length()) {
        cout << "Result: False\n";
        return 0;
    }
    
    int freq[256] = {0};
    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i]]++;
        freq[s2[i]]--;
    }
    
    bool isAnagram = true;
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0) {
            isAnagram = false;
            break;
        }
    }
    
    if (isAnagram) cout << "Result: True\n";
    else cout << "Result: False\n";
    
    return 0;
}