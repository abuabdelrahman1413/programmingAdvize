#include <iostream>
using namespace std;
// Monthly loan Installment

int ReadpositiveNumbers(string Message)
{
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int MonthlyLoanInstallment(int LoanAmount, int Months)
{
    return LoanAmount / Months;
}

int main()
{
    int LoanAmount = ReadpositiveNumbers("please Enter Loan Amount?");
    int Months = ReadpositiveNumbers(("Please Enter Months"));

    cout << "\nTotal Month Installment to pay " << MonthlyLoanInstallment(LoanAmount, Months) << endl;
}
