#include <iostream>
using namespace std;
int main()
{
    short A,B;
    cout << "Enter A: "<< endl;
    cin >> A;
    cout << "Enter B: "<< endl;
    cin >> B;

    cout <<"A is = B: "<<(A == B) << endl;
    cout <<"A is > B: "<< (A > B) << endl;
    cout <<"A is < B: "<< (A < B) << endl;
    cout <<"A is != B: "<< (A != B) << endl;
    cout <<"A is <= B: "<< (A <= B) << endl;
    cout <<"A is >= B: "<< (A >= B) << endl;
} // namespace std;

