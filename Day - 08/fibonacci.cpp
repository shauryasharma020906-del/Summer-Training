#include <iostream>
using namespace std;

int getFib(int x) {
    return (x == 0 || x == 1) ? x : getFib(x - 1) + getFib(x - 2);
}

int main() {
    int count;
    cout << "How many terms? ";
    cin >> count;
    
    int j = 0;
    while (j < count) {
        cout << getFib(j) << " ";
        j++;
    }
    cout << "\n";
    
    return 0;
}