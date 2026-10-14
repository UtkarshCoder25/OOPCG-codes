#include <iostream>
#include <string>
using namespace std;

// Base class
class Employee {
protected:
    int empId;
    string name;

public:
    Employee(int id, string n) {
        empId = id;
        name = n;
    }

    // Virtual function
    virtual void calculateSalary() {
        cout << "Employee Salary" << endl;
    }

    virtual void display() {
        cout << "Employee ID: " << empId << endl;
        cout << "Name: " << name << endl;
    }
};

// Derived class - Permanent Employee
class PermanentEmployee : public Employee {
private:
    double basicSalary;
    double allowance;

public:
    PermanentEmployee(int id, string n, double basic, double allow)
        : Employee(id, n) {
        basicSalary = basic;
        allowance = allow;
    }

    // Overriding calculateSalary()
    void calculateSalary() override {
        double salary = basicSalary + allowance;

        cout << "\n--- Permanent Employee ---" << endl;
        display();
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

// Derived class - Contract Employee
class ContractEmployee : public Employee {
private:
    double hoursWorked;
    double hourlyRate;

public:
    ContractEmployee(int id, string n, double hours, double rate)
        : Employee(id, n) {
        hoursWorked = hours;
        hourlyRate = rate;
    }

    // Overriding calculateSalary()
    void calculateSalary() override {
        double salary = hoursWorked * hourlyRate;

        cout << "\n--- Contract Employee ---" << endl;
        display();
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Total Salary: " << salary << endl;
    }
};

int main() {
    PermanentEmployee p(101, "Rahul", 30000, 5000);
    ContractEmployee c(102, "Priya", 160, 200);

    p.calculateSalary();
    c.calculateSalary();

    return 0;
}
       

