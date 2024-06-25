#include <iostream>
using namespace std;
// Loan Installment Months

int ReadpositiveNumbers(string Message)
{
    int Number = 0;

    do {
        cout << Message << endl;
        cin >> Number;
    } while (Number <= 0);

    return Number;
}

int TotalMonths(int LoanAmount, int MonthlyInstallment)
{
    return LoanAmount / MonthlyInstallment;
}

int main()
{
    int LoanAmount = ReadpositiveNumbers("please Enter Loan Amount?");
    int MonthlyInstallment = ReadpositiveNumbers(("Please Enter Monthly Installment"));

    cout << "\nTotal Months to pay " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
}
