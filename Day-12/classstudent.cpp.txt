#include <iostream>
#include <string>
using namespace std;

class StudentInfo {
public:
    string studentName;
    int id;
    float score;

    void showData() {
        cout << "Student Name -> " << studentName << "\n";
        cout << "Student ID -> " << id << "\n";
        cout << "Score -> " << score << "\n";
    }
};

int main() {
    StudentInfo st;
    cout << "Input Name: ";
    cin >> st.studentName;
    cout << "Input ID: ";
    cin >> st.id;
    cout << "Input Score: ";
    cin >> st.score;

    cout << "\nRecord Data:\n";
    st.showData();

    return 0;
}