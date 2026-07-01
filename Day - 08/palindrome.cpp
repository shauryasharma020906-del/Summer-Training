#include <iostream>
#include <string>
using namespace std;

bool checkPal(string text) {
    if (text.length() <= 1) {
        return true;
    }
    if (text[0] != text[text.length() - 1]) {
        return false;
    }
    return checkPal(text.substr(1, text.length() - 2));
}

int main() {
    string word;
    cout << "Input word: ";
    cin >> word;
    
    if (checkPal(word)) {
        cout << "Palindrome: YES\n";
    } else {
        cout << "Palindrome: NO\n";
    }
    
    return 0;
}