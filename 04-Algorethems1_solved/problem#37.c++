#include <iostream>
#include <string>
using namespace std;
//sum until user enter -99
float ReadNumber(string Message)
{
    float Number = 0;
    do{
        cout << Message << endl;
        cin >> Number;
    }while(Number != -99);

    return Number;
}
float SumNumbers(){

    int Sum = 0 , Number = 0 , i = 0;

    do {
        Number = ReadNumber ("Please Enter Number " + to_string (i+1) );
        if (Number == -99){
            break;}
            i++;
        Sum = Sum + Number;

    } while (Number != -99);

    return Sum;
}

int main()
{
    // int Result = SumNumbers();
    // cout << "Result = " <<Result<< endl;

    cout <<SumNumbers()<<endl;
    return 0;
}
