#include <iostream>
using namespace std;

int main() {
    float p, r, t, si;
    cout << "Enter values for P, R, and T (separated by space): ";
    cin >> p >> r >> t;
    si = (p * r * t) / 100.0;
    cout << "SI = " << si << "\n";
    return 0;
}