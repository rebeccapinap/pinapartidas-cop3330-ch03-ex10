// Include header file
#include "header.h"

int main() 
{
    string operation;
    double operand1;
    double operand2;

    // Asks for user input
    cout << "Please enter your operation:\nOperation: "; 

    cin >> operation;
    cout << "\nOperand 1: ";
    cin >> operand1;
    cout << "\nOperand 2: ";
    cin >> operand2;
    cout << "\n";

    // Output with corresponding operation
    if (operation == "+" || operation == "plus")
        cout << "The result is " << operand1 + operand2 << ".\n";
    else if (operation == "-" || operation == "minus")
        cout << "The result is " << operand1 - operand2 << ".\n";  
    else if (operation == "*" || operation == "mul")
        cout << "The result is " << operand1 * operand2 << ".\n";
    else if (operation == "/" || operation == "div")
        cout << "The result is " << operand1 / operand2 << ".\n";

    return 0;
}
