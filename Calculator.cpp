#include <iostream>
using namespace std;

class MathOps {
private:
    double x, y;

public:
    // Constructor to set values
    MathOps(double a, double b) {
        x = a;
        y = b;
    }

    double calculateSum() {
        return x + y;
    }

    double calculateDifference() {
        return x - y;
    }

    double calculateProduct() {
        return x * y;
    }

    double calculateQuotient() {
        if (y == 0) {
            cout << "Error: Cannot divide by zero." << endl;
            return 0;
        }
        return x / y;
    }
};

int main() {
    double num1, num2;
    int choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    MathOps obj(num1, num2);

    cout << "\nChoose operation:" << endl;
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Result: " << obj.calculateSum() << endl;
            break;
        case 2:
            cout << "Result: " << obj.calculateDifference() << endl;
            break;
        case 3:
            cout << "Result: " << obj.calculateProduct() << endl;
            break;
        case 4:
            cout << "Result: " << obj.calculateQuotient() << endl;
            break;
        default:
            cout << "Invalid option selected." << endl;
    }

    return 0;
}