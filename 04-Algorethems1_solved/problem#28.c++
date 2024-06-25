#include <iostream>
using namespace std;
// sum odd  Numbers fom 1 to N;
enum enOddOrEven {Odd = 1, Even = 2};
int ReadNumber()
{
    int N;
    cout <<"Please enter N?\n";
    cin >> N;
    return N;
}

enOddOrEven CheckOddOrEven(int N)
{
    if (N % 2 == 0)
        return enOddOrEven::Even;
    else
        return enOddOrEven::Odd;
}
int SumOddNumbersFrom1ToN_UsingWhile(int N)
{
    int i = 1;
    int Sum = 0;
    cout << "Range printed using While statement:\n";
    while (i < N) {

    if (CheckOddOrEven(i) == enOddOrEven::Odd)
        Sum = Sum + i;
    i++;
    }
    return Sum;
}

int SumOddNumbersFrom1ToN_UsingDoWhile(int N)
{
    int i = 0;
    int sum = 0;
    cout << "Range printed using While statement:\n";
    do {
    i++;
    if (CheckOddOrEven(i) == enOddOrEven::Odd)
        sum += i;

    } while (i < N);

    return sum;
}
int SumOddNumberFrom1ToN_UsingFor(int N)
{

    int sum = 0; //Alwaysinitial value
    cout << "Range printed using While statement:\n";

    for (int i = 1; i <= N ; i ++){
        if (CheckOddOrEven(i) == enOddOrEven::Odd)
            sum += i;
    }
    return sum;
}

int main()
{
    int N = ReadNumber(); /*Why i did't use functio ReadNumber entir other Functions? Because i wanna to Read Number just on time'*/

   cout <<SumOddNumbersFrom1ToN_UsingWhile(N) << endl;
   cout << SumOddNumbersFrom1ToN_UsingDoWhile(N) << endl;
   cout <<SumOddNumberFrom1ToN_UsingFor(N) << endl;
}
