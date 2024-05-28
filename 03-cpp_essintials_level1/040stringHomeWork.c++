#include <iostream>
#include <string>

using namespace std;

int main ()
{   
    string string1,string2,string3;
    cout << "Please Enters string1: " << endl;
    getline(cin,string1);

    cout << "Please Enters string2: " << endl;
    getline(cin,string2);

    cout << "Please Enters string3: " << endl;
    getline(cin,string3);

    cout << "******************************************" << endl;

    cout << "The length of string1 is: " << string1.length() << endl;
    cout << "Charecters at 0,2,4,7 are: " <<string1[0]<<","<<string1[2]<<","<<string1[4]<<","<<string1[7] << endl;
    cout << "concatination string 2 and string3 = " << string2+string3 << endl;
    cout <<"5 * 10 = " << stoi(string2) * stoi(string3) << endl;
    return 0;
}