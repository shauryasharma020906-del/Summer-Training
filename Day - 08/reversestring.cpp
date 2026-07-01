#include <iostream>
#include <string>
using namespace std;

string reverseString(string text) {
    if (text.length() == 0) {
        return "";
    }
    return reverseString(text.substr(1)) + text[0];
}

int main() {
    string inputStr;
    cout << "Input string: ";
    getline(cin, inputStr);
    
    cout << "Output: " << reverseString(inputStr) << "\n";
    return 0;
}