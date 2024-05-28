#include <iostream>
using namespace std;
int main()
{
    int n = 0;
    (n > 0) ? cout << "positive" << endl : cout << "Negative" << endl;
    (n == 0) ? cout << 0 << endl :(n > 0) ? cout << "positive" << endl : cout << "Negative" ;
    
    return 0;
}