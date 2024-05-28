#include <iostream>
#include "my_lib.h"
using namespace std;
using namespace my_lib;
int main()
{
    test();
    int mark = 93;
    string result;
    result = (mark >= 50) ? "pass" : "Fail";
    cout << result << endl;
    return 0;
}