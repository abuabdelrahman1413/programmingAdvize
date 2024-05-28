#include <iostream>
using namespace std;
int main()
{
    bool A = 1, B = 0;
    // cout << "Enter A: "<< endl;
    // cin >> A;
    // cout << "Enter B: "<< endl;
    // cin >> B;

    cout <<"A is = B: "<<(A && B) << endl;
    cout <<"A is > B: "<< (A || B) << endl;
    cout <<"A is < B: "<< (!A) << endl;
    cout <<"A is != B: "<< (B) << endl;
    cout <<"A is <= B: "<< !(A && B) << endl;
    cout <<"A is >= B: "<< !(A || B) << endl;

    bool result;
    result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << result << endl;
} // namespace std;


