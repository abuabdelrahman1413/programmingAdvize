#include <iostream>
using namespace std;

int main()
{
    int i = 0;
    int Arr[10] = {10,20,44,45,46,55,77,33,79,100};

    for  ( i; i <= 9; i++ )
    {
        if (Arr[i] == 46)
        {
            cout << i << endl;
            break; // جملة البريك بتسرع البرنامج جدا من دونها كنت حتلف على كل عناصر المصفوفة
        }
    }
}