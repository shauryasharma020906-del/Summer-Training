#include <iostream>
#include <string>
#include <utility>
using namespace std;

int main() {
    pair<int, string> rec;
    
    cout << "Input ID: ";
    cin >> rec.first;
    cout << "Input Student Name: ";
    cin >> rec.second;
    
    cout << "Saved -> ID: " << rec.first << " | Name: " << rec.second << "\n";
    return 0;
}