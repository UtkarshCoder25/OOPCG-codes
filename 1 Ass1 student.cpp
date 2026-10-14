#include <iostream>
using namespace std;

class Student {
private:
    int rollNo;
 
    string name;
    float marks;

public:
    // Function to accept student details
    void accept() {
        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    // Function to display student details
    void display() {
        cout << "\n--- Student Details ---" << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student s;

    s.accept();
    s.display();

    return 0;
}
