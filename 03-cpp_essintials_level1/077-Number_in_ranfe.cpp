#include <iostream>
using namespace std;

int Read_number_in_range_WHILE(int from, int to)
{
    int number;
    cout << "please entre a number between " << from << " and " << to << "\n";
    cin >> number;

    while (number < from || number > to)
    {
        cout << "Wrong Number, " ;
        cout << "Please enter a number between "<< from << " and " << to <<"\n";
        cin >> number;
    }
    return number;
}

int Read_number_in_range_DOWHILE(int from, int to)
{
    int number;
   

    while (number < from || number > to)
    {
        
        cout << "Please enter a number between "<< from << " and " << to <<"\n";
        cin >> number;
    }
    return number;
}

int main ()
{
    
    //int number  = Read_number_in_range_WHILE(18, 45);
    //cout << "The number is " << number << endl;
    int NUMBER = Read_number_in_range_DOWHILE(18,45);
    cout << "The number is " << NUMBER << endl;
}