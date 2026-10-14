#include <iostream>
using namespace std;

int main() {
    double num1, num2;

    try {
        cout << "Enter the first number: ";
        if (!(cin >> num1)) {
            throw "Invalid input! Please enter a number.";
        }

        cout << "Enter the second number: ";
        if (!(cin >> num2)) {
            throw "Invalid input! Please enter a number.";
        }

        // Check for division by zero
        if (num2 == 0) {
            throw "Division by zero is not allowed!";
        }

        double result = num1 / num2;

        cout << "Result = " << result << endl;
    }
    catch (const char* message) {
        cout << "Exception: " << message << endl;
    }

    return 0;
}
       

