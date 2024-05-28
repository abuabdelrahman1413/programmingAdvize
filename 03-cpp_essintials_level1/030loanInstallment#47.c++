#include <iostream>
using namespace std;
int main()
{
    unsigned int loanAmount;
    unsigned short monthlyPayment, months;
    cout << "Enter loa amount: "<<endl;
    cin >> loanAmount;
    cout << "Enter monthly payment: " <<endl;
    cin >> monthlyPayment;
    months = loanAmount / monthlyPayment;
    cout << "months is: " << months << endl;
} // namespace std;
