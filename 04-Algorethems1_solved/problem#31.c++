#include <iostream>
using namespace std;
//Powerof2_3_4
int ReadNumber()
{
    int N;
    cout <<"Please enter N?\n";
    cin >> N;
    return N;
}
void Powerof2_3_4(int N)
{
    int a, b, c;
    a= N * N;
    b= a * N;
    c= b * N;
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;

}
int main()
{
    Powerof2_3_4(ReadNumber());
}
