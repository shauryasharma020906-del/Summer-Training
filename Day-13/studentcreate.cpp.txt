#include <iostream>
#include <string>
using namespace std;

class StudentInfo {
private:
    string studentName;

public:
    void setName(string str) {
        studentName = str;
    }

    string getName() {
        return studentName;
    }
};

int main() {
    StudentInfo info;
    info.setName("Bob");
    cout << "Registered Name -> " << info.getName() << "\n";
    return 0;
}