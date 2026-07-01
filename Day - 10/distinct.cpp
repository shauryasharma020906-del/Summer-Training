#include <iostream>
#include <set>
using namespace std;

int main() {
    int len;
    cout << "Input array length: ";
    cin >> len;
    
    set<int> distinctNums;
    cout << "Input array items: ";
    for (int j = 0; j < len; j++) {
        int num;
        cin >> num;
        distinctNums.insert(num);
    }
    
    cout << "Distinct count = " << distinctNums.size() << "\n";
    return 0;
}