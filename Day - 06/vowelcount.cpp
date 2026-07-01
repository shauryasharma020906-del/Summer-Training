#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    int vCount = 0;
    cout << "Input text: ";
    getline(cin, text);
    
    for (char ch : text) {
        char lowerCh = tolower(ch);
        if (lowerCh == 'a' || lowerCh == 'e' || lowerCh == 'i' || lowerCh == 'o' || lowerCh == 'u') {
            vCount++;
        }
    }
    
    cout << "Total vowels found = " << vCount << "\n";
    return 0;
}