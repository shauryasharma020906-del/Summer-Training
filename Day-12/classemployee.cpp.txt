#include <iostream>
#include <string>
using namespace std;

class Staff {
    string staffName;
    int staffId;

public:
    Staff(string nameInput, int idInput) {
        staffName = nameInput;
        staffId = idInput;
    }

    void display() {
        cout << "ID [" << staffId << "] | Name [" << staffName << "]\n";
    }
};

int main() {
    string n;
    int i;

    cout << "Input Staff Name: ";
    cin >> n;
    cout << "Input Staff ID: ";
    cin >> i;

    Staff s(n, i);
    s.display();

    return 0;
}