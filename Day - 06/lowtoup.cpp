#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string text;
    cout << "Input string: ";
    getline(cin, text);
    
    for (int j = 0; j < text.length(); j++) {
        text[j] = toupper(text[j]);
    }
    
    cout << "Converted: " << text << "\n";
    return 0;
}