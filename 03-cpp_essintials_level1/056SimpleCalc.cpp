#include <iostream>
using namespace std;

// Structure to store numbers and operator
struct stNumsOperator {
    int Num1;
    int Num2;
    char Operator;
};

// Function to read numbers and operator from the user
void ReadNumsOperator(stNumsOperator &Info) {
    cout << "Enter First Number\n";
    cin >> Info.Num1;

    cout << "Enter Second Number\n";
    cin >> Info.Num2;

    cout << "Enter The operator\n";
    cin >> Info.Operator;
}

// Function to perform the specified operation on the numbers
int Operator(stNumsOperator Info) {
    switch (Info.Operator) { // Use the first character of the operator string
        case '+':
            return (Info.Num1 + Info.Num2);
        case '-':
            return (Info.Num1 - Info.Num2);
        case '*':
            return (Info.Num1 * Info.Num2);
        case '/': 
            // Check for division by zero
            if (Info.Num2 != 0) {
                return (Info.Num1 / Info.Num2);
            } else {
                cout << "Error: Division by zero is not allowed.\n";
                return 0; // You can choose to handle this error in a different way if needed
            }
        default:
            cout << "Error: Invalid operator.\n";
            return 0; // Handle invalid operator
    }
}

int main() {
    stNumsOperator calc;
    ReadNumsOperator(calc);
    int Result = Operator(calc);
    cout << "Result: " << Result << endl;
    return 0;
}
