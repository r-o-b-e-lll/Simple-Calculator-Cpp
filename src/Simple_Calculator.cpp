#include <iostream>
#include <cmath> // Required for pow()

using namespace std;

int main() {
    int Choice;
    double Number1, Number2;

    do {
        cout << "\n--- SIMPLE CALCULATOR ---" << endl;
        cout << "1. ADDITION (+)" << endl;
        cout << "2. SUBTRACTION (-)" << endl;
        cout << "3. MULTIPLICATION (*)" << endl;
        cout << "4. DIVISION (/)" << endl;
        cout << "5. Square Root" << endl;
        cout << "6. nth Root" << endl;
        cout << "7. Power (x^y)" << endl; // New Option
        cout << "8. EXIT" << endl;
        cout << "SELECT WHAT YOU WANT TO DO (1-8): ";
        cin >> Choice;

        if (Choice == 8) {
            cout << "Exiting program. Goodbye!" << endl;
            break;
        }

        switch (Choice) {
            case 1:
                cout << "Enter two Numbers: ";
                cin >> Number1 >> Number2;
                cout << "Result: " << Number1 + Number2 << endl;
                break;
            case 2:
                cout << "Enter two Numbers: ";
                cin >> Number1 >> Number2;
                cout << "Result: " << Number1 - Number2 << endl;
                break;
            case 3:
                cout << "Enter two Numbers: ";
                cin >> Number1 >> Number2;
                cout << "Result: " << Number1 * Number2 << endl;
                break;
            case 4:
                cout << "Enter two Numbers: ";
                cin >> Number1 >> Number2;
                if (Number2 != 0)
                    cout << "Result: " << Number1 / Number2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Enter a Number: ";
                cin >> Number1;
                if (Number1 >= 0)
                    cout << "Result: " << sqrt(Number1) << endl;
                else
                    cout << "Error: Cannot square root a negative number!" << endl;
                break;
            case 6:
                cout << "Enter the Number: ";
                cin >> Number1;
                cout << "Enter root index: ";
                cin >> Number2;
                if (Number2 != 0)
                    cout << "Result: " << pow(Number1, 1.0/Number2) << endl;
                else
                    cout << "Error: Root index cannot be zero!" << endl;
                break;
            case 7: // Implementation of Power Task
                cout << "Enter the Base (x): ";
                cin >> Number1;
                cout << "Enter the Exponent (y): ";
                cin >> Number2;
                cout << "Result (" << Number1 << "^" << Number2 << "): " << pow(Number1, Number2) << endl;
                break;
            default:
                cout << "Wrong Choice! Please select 1-8." << endl;
        }

    } while (Choice != 8);

    return 0;
}
