#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cout << "Enter size of vector: ";
    cin >> n;
    
    vector<int> v;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v.push_back(val);
    }
    
    cout << "Enter rotation steps: ";
    cin >> k;
    k = k % n;
    
    cout << "Rotated vector: ";
    for (int i = n - k; i < n; i++) {
        cout << v[i] << " ";
    }
    for (int i = 0; i < n - k; i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    
    return 0;
}