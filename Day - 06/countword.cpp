#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int words = 0;
    bool inWord = false;
    
    cout << "Input your text: ";
    getline(cin, s);
    
    for (char c : s) {
        if (c == ' ' || c == '\t' || c == '\n') {
            inWord = false;
        } else if (!inWord) {
            inWord = true;
            words++;
        }
    }
    
    cout << "Total word count is " << words << "\n";
    return 0;
}