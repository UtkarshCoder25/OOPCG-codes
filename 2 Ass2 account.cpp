#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolder;
    double balance;

    // Static data member
    static int accountCount;

public:
    // Constructor
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolder = name;
        balance = bal;

        accountCount++;
        cout << "Bank Account Created: " << accountNumber << endl;
    }

    // Display account details
    void display() {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }

    // Static member function
    static void displayAccountCount() {
        cout << "\nTotal Bank Accounts Created: "
             << accountCount << endl;
    }

    // Destructor
    ~BankAccount() {
        cout << "Bank Account Destroyed: "
             << accountNumber << endl;
    }
};

// Initialize static data member
int BankAccount::accountCount = 0;

int main() {
    BankAccount acc1(101, "Rahul", 5000);
    BankAccount acc2(102, "Priya", 7500);
    BankAccount acc3(103, "Amit", 10000);

    acc1.display();
    acc2.display();
    acc3.display();

    BankAccount::displayAccountCount();

    return 0;
}
