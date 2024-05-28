#include <iostream>
using namespace std;

void Read_Array(int Arr1[100], int &Length)
{
    int i=0;

    cout << "How many numbers do you want to enter? 1 to 100?" << endl;
    cin >> Length;
    for (i; i <= Length-1; i++)
    {
        cout << "Please enter number" << i+1 << endl;
        cin >> Arr1[i];
    }
}

void Print_Array(int Arr1[100], int Length)
{
    int i=0;

    for (i; i <= Length-1; i++)
    {
        cout << "Number ["<< i+1<<"] : " <<Arr1[i] << endl;
        
    }
}

int Calcualte_Array_Sum(int Arr1[100],int Length)
{
    int i=0,sum=0;

    for (i; i <= Length-1; i++)
    {
        sum = sum + Arr1[i];
        
    }
    return sum;
}



int main()
{
    int Arr1[100], Length = 0;
    Read_Array(Arr1,Length);
    Print_Array(Arr1,Length);
    int sum = Calcualte_Array_Sum(Arr1,Length);

    cout << "\n***********************************\n";
   cout <<"Sum = " << sum << endl;
   cout <<"Average = " << (float) (sum/Length) << endl;
}