#include <iostream>
using namespace std;
//pay Reminder

float ReadPosotiveNumber (string Message)
{
    float Number = 0;
    do {
    cout << Message << endl;
    cin >>Number;
}while (Number <= 0);
return Number;
}
float CalculateReminder(float Totalbill, float Cachbid)
{
    return Totalbill - Cachbid;
}
int main()
{
    float Totalbill = ReadPosotiveNumber("Please enter Total bill");
    float Cachbid = ReadPosotiveNumber("Please enter Cach Bid");
    cout << endl;
    cout << "Total Bill = " <<Totalbill<<endl;
    cout << "Cach Bid = " <<Cachbid<<endl;
    cout <<  "*********************************\n";
    cout << "Reminder = " <<CalculateReminder(Totalbill,Cachbid ) << endl;
}
