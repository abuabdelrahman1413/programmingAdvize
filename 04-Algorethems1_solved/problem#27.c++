#include <iostream>
using namespace std;
// print Numbers fom N to 1;
int ReadNumber()
{
    int N;
    cout <<"Please enter N?\n";
    cin >> N;
    return N;
}
void PrintRangeFromNTo1_UsingWhile(int N)
{
    int i = N;
    cout << "Range printed using While statement:\n";
    while (i > 0) {

    cout << i << endl;
    i--;
    }
}

void PrintRangeFromNTo1_UsingDoWhile(int N)
{
    int i = N;
    cout << "Range printed using While statement:\n";
    do {

    cout << i << endl;
    i--;
    } while (i > 0);
}
void PrintRangeFromNTo1_UsingFor(int N)
{

    cout << "Range printed using While statement:\n";
    for (int i = N; i > 0 ; i --)
        cout << i << endl;
}

int main()
{
    int N = ReadNumber(); /*Why i did't use functio ReadNumber entir other Functions? Because i wanna to Read Number just on time'*/

    PrintRangeFromNTo1_UsingWhile(N);
    PrintRangeFromNTo1_UsingDoWhile(N);
    PrintRangeFromNTo1_UsingFor(N);
}
