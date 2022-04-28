#include <iostream>
using namespace std;

class Calculator {
public: 
    float number1;
    float number2;
    char operation;
    float result;

    Calculator(float n1, float n2, char op) {
        this->number1 = n1;
        this->number2 = n2;
        this->operation = op;
    }

    float calculate() {
        if (operation == '+') {
            result = number1 + number2;
        }
        else if (operation == '-') {
            result = number1 - number2;
        }
        else if (operation == '*') {
            result = number1 * number2;
        }
        else {
            result = number1 / number2;
        };

        return result;
    }
};

int main()
{
    char action = 'Y';
    
    while (action == 'Y' || action == 'y') {
        cout << "Enter number1: ";
        float number1;
        cin >> number1;

        cout << "Enter number2: ";
        float number2;
        cin >> number2;

        cout << "Enter operation: ";
        char operation;
        cin >> operation;
        
        Calculator calc(number1, number2, operation);
        
        cout << calc.calculate() << "\n";

        cout << "\n" << "Continue: Y/N? ";
        cin >> action;
    }
    return 0;
}
