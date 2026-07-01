#include <iostream>
#include <vector>
using namespace std;

int main() {
    int count;
    cout << "Vector size: ";
    cin >> count;
    
    vector<int> dataVec;
    cout << "Provide numbers: ";
    for (int j = 0; j < count; j++) {
        int temp;
        cin >> temp;
        dataVec.push_back(temp);
    }
    
    int largest = dataVec[0];
    for (int current : dataVec) {
        if (current > largest) {
            largest = current;
        }
    }
    
    cout << "The max value is " << largest << "\n";
    return 0;
}