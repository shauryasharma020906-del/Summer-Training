#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string sentence;
    cout << "Input your text: ";
    getline(cin, sentence);
    
    stringstream stream(sentence);
    string token;
    map<string, int> counts;
    
    while (stream >> token) {
        counts[token]++;
    }
    
    cout << "Frequency of words:" << "\n";
    for (auto pair : counts) {
        cout << pair.first << " -> " << pair.second << "\n";
    }
    
    return 0;
}