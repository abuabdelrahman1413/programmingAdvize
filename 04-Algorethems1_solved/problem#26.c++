#include <iostream>
using namespace std;
// print Numbers fom 1 to n;
int ReadNumber()
{
    int N;
    cout <<"Please enter N?\n";
    cin >> N;
    return N;
}
void PrintRangeFrom1ToN_UsingWhile(int N)
{
    int i = 0;
    cout << "Range printed using While statement:\n";
    while (i < N) {
    i++;
    cout << i << endl;
    }
}

void PrintRangeFrom1ToN_UsingDoWhile(int N)
{
    int i = 0;
    cout << "Range printed using While statement:\n";
    do {
    i++;
    cout << i << endl;
    } while (i < N);
}
void PrintRangeFrom1ToN_UsingFor(int N)
{
    int i = 1;
    cout << "Range printed using While statement:\n";
    for (i; i <= N ; i ++)
        cout << i << endl;
}

int main()
{
    int N = ReadNumber(); /*Why i did't use functio ReadNumber entir other Functions? Because i wanna to Read Number just on time'*/

    PrintRangeFrom1ToN_UsingWhile(N);
    PrintRangeFrom1ToN_UsingDoWhile(N);
    PrintRangeFrom1ToN_UsingFor(N);
}
