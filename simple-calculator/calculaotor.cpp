// simple_calculator.cpp
#include <iostream>

using namespace std;

// Function to perform addition
double add(double a, double b) {
    return a + b;
}

// Function to perform subtraction
double subtract(double a, double b) {
    return a - b;
}

// Function to perform multiplication
double multiply(double a, double b) {
    return a * b;
}

// Function to perform division
double divide(double a, double b) {
    if (b == 0) {
        cerr << "Error: Division by zero!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2, result;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "Select operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter choice (1-4): ";
    cin >> choice;

    if (choice < 1 || choice > 4) {
        cerr << "Invalid choice" << endl;
        return 1;
    }

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    switch (choice) {
        case 1:
            result = add(num1, num2);
            cout << "The result of " << num1 << " + " << num2 << " is: " << result << endl;
            break;
        case 2:
            result = subtract(num1, num2);
            cout << "The result of " << num1 << " - " << num2 << " is: " << result << endl;
            break;
        case 3:
            result = multiply(num1, num2);
            cout << "The result of " << num1 << " * " << num2 << " is: " << result << endl;
            break;
        case 4:
            result = divide(num1, num2);
            if (num2 != 0) {
                cout << "The result of " << num1 << " / " << num2 << " is: " << result << endl;
            }
            break;
    }

    return 0;
}