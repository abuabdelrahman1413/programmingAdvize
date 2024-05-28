#include <iostream>
using namespace std;
// Factorial

int ReadPosotiveNumber(string Message)
{
    int N;
    do {
        cout <<Message<<endl;
        cin >> N;
    } while(N<0);
    return N;
}
int Factorial(int N)
{
    int F = 1;
    for (int i = N ; i >= 1; i--)
    {
        F=F*i;
    }
    return F;
}
int main()
{
    cout << Factorial(ReadPosotiveNumber("Entr a posotive Number? ")) << endl;
    return 0;
}
