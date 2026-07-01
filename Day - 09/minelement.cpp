#include <iostream>
#include <vector>
using namespace std;

int main() {
    int len;
    cout << "Enter length: ";
    cin >> len;
    
    vector<int> numbers;
    cout << "Input numbers: ";
    for (int a = 0; a < len; a++) {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    
    int smallest = numbers[0];
    for (int num : numbers) {
        if (num < smallest) {
            smallest = num;
        }
    }
    
    cout << "Smallest value is " << smallest << "\n";
    return 0;
}