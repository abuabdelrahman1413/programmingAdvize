#include <iostream>
#include <string>

using namespace std;


int main()
{
    // int Num;
    // double NumDouble = 12.89564;
    // Num = NumDouble; //implicit
    // Num = (int) NumDouble; //Explicit (C) style
    // Num = int(NumDouble); //Explicit (C++) style

    // cout << Num << endl;
    // cout << "#########" << endl;
    
    // string str = "89.785";

    // //string to int
    // Num = stoi(str);
    // cout << Num << endl;
    // //string to float
    // float Num_f = stof(str);
    // cout << Num_f << endl;
    // //string to double
    // double Num_d = stod(str);
    // cout << Num_d << endl;

    // //Numbers to string
    // float numf =67.9;
    // string st1;
    // st1 = to_string(numf);
    // cout << st1 <<endl;
    string str = "43.22";
    double numDouble = stod(str);
    cout << numDouble << endl;
    int numInt = stoi(str);
    cout << numInt << endl;
    float numFloat = stof(str);
    cout << numFloat << endl;

    int n1=20;
    string str1 = to_string (n1);
    cout << str1 << endl;

    double n2=33.5;
    string str2 = to_string (n2);
    cout << str2 << endl;

    float n3 = 55.23;
    string str3;
    int num3;
    str3 = to_string(n3);
    cout << str3 <<endl;
    num3 = n3;
    cout << num3 << endl;
    num3 = (int) n3;
    cout << num3 << endl;
    num3 = int(n3);
    cout << num3 << endl;

    return 0;
}