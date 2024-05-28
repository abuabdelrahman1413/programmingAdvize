#include <iostream>
using namespace std;

//Full Name;

struct stInfo
{
    string First_Name;
    string Last_name;
};

stInfo Read_Info ()
{
    stInfo Info;
    cout << "Please Enter First Name: \n";
    cin >> Info.First_Name;
    cout << "Please Enter Last Name: \n";
    cin >> Info.Last_name;

    return Info;
}
string Get_Full_Name (stInfo Info, bool Reversed)
{
     string Full_Name;
    if (!Reversed )
       
        Full_Name = Info.First_Name + " " + Info.Last_name;
        
    else
         Full_Name = Info.Last_name + " " + Info.First_Name;

     return Full_Name;   
}
void Print_Full_Name(string Full_Name)
{
    cout << "Your Name is : " << Full_Name << endl;
}

int main()
{
    Print_Full_Name(Get_Full_Name(Read_Info(),true));
}
