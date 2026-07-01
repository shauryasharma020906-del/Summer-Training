#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Input total score: ";
    cin >> score;
    
    if (score > 89) cout << "You got an A\n";
    else if (score > 79) cout << "You got a B\n";
    else if (score > 69) cout << "You got a C\n";
    else if (score > 59) cout << "You got a D\n";
    else cout << "You got an F\n";
    
    return 0;
}