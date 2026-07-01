#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string word;
    cout << "Input word: ";
    cin >> word;
    
    string revWord = word;
    reverse(revWord.begin(), revWord.end());
    
    if (word == revWord) {
        cout << "Palindrome: YES\n";
    } else {
        cout << "Palindrome: NO\n";
    }
    
    return 0;
}