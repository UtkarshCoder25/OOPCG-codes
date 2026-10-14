#include <iostream>
#include <fstream>
using namespace std;

class Employee {
private:
    int empId;
    char name[50];
    float salary;

public:
    // Function to accept employee details
    void getData() {
        cout << "Enter Employee ID: ";
        cin >> empId;

        cout << "Enter Employee Name: ";
        cin.ignore();
        cin.getline(name, 50);

        cout << "Enter Salary: ";
        cin >> salary;
    }

    // Function to display employee details
    void showData() {
        cout << "\nEmployee ID: " << empId;
        cout << "\nEmployee Name: " << name;
        cout << "\nSalary: " << salary << endl;
    }
};

int main() {
    Employee emp;
    fstream file;
    int choice;

    do {
        cout << "\n===== Employee File Handling =====";
        cout << "\n1. Add Employee Record";
        cout << "\n2. Display Employee Records";
        cout << "\n3. Exit";
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {

        case 1:
            // Write record to file
            file.open("employee.dat", ios::out | ios::app | ios::binary);

            emp.getData();

            file.write((char*)&emp, sizeof(emp));

            file.close();

            cout << "\nRecord Stored Successfully!";
            break;

        case 2:
            // Read records from file
            file.open("employee.dat", ios::in | ios::binary);

            if (!file) {
                cout << "\nFile not found!";
                break;
            }

            cout << "\n--- Employee Records ---";

            while (file.read((char*)&emp, sizeof(emp))) {
                emp.showData();
            }

            file.close();
            break;

        case 3:
            cout << "\nExiting Program...";
            break;

        default:
            cout << "\nInvalid Choice!";
        }

    } while (choice != 3);

    return 0;
}




