#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cout << "Input string to reverse: ";
    getline(cin, s);
    
    reverse(s.begin(), s.end());
    
    cout << "Result: " << s << "\n";
    return 0;
}