#include <iostream>
using namespace std;
//Prime Number


enum enPrimeNotPrime { Prime = 1, NotPrine = 2 };
float ReadPosotiveNumber (string Message){
    int Number = 0;
    do {
    cout << Message << endl;
    cin >>Number;
}while (Number <= 0);
return Number;
}
enPrimeNotPrime CheckPrime(int Number){
    int M = (Number/2);
    for (int i = 2; i <= M ; i++){
        if (Number % i == 0){
            return enPrimeNotPrime::NotPrine;
        }

    }
    return enPrimeNotPrime::Prime;
}
void PrintNumberType(int Number){
    switch (CheckPrime(Number)) {
        case enPrimeNotPrime::Prime:
            cout << "The Number is Prime\n";
            break;
        case enPrimeNotPrime::NotPrine:
          cout << "The Number is Not Prime\n";
          break;
}
}
int main()
{
    PrintNumberType(ReadPosotiveNumber("Please Enter a posotive Numbr?"));
    return 0;
}
