#include <iostream>
using namespace std;
// power of M
int ReadNumber()
{
    int N;
    cout <<"Please enter a Number?\n";
    cin >> N;
    return N;
}
int ReadPower()
{
    int M;
    cout <<"Please enter a Power?\n";
    cin >> M;
    return M;
}
int PoweOfM(int M, int N)
{
    if (M == 0)
        return 1; // return always exit function due that you don't need else
    int P = 1;
    for (int i = 1 ; i <= M ; i++ )
        P = P * N;
    return P;
}
int main()
{
    cout << endl << "Result = " << PoweOfM(ReadPower(),ReadNumber()) << endl; //if you write ReadNumber first then the program watnt you enter power first because the compiler stack rtl;
}
