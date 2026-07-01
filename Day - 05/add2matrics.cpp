#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Input dimensions (rows cols): ";
    cin >> rows >> cols;
    
    int m1[10][10], m2[10][10], result[10][10];
    
    cout << "Provide Matrix A values:\n";
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            cin >> m1[x][y];
        }
    }
    
    cout << "Provide Matrix B values:\n";
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            cin >> m2[x][y];
            result[x][y] = m1[x][y] + m2[x][y];
        }
    }
    
    cout << "Result Matrix:\n";
    for (int x = 0; x < rows; x++) {
        for (int y = 0; y < cols; y++) {
            cout << result[x][y] << "\t";
        }
        cout << "\n";
    }
    
    return 0;
}