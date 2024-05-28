#include <cstddef>
#include <iostream>
using namespace std;
// sum Even  Numbers fom 1 to N;
enum enOddOrEven { Odd = 1, Even = 2, All = 3 };
int ReadNumber() {

  int N;
  cout << "Please enter N?\n";
  cin >> N;
  return N;
}

int CheckChoise() {
  int choise;
  cout << "Please Enter your choise: \n";
  cout << "[1] for Even\n";
  cout << "[2] for Odd\n";
  cout << "[3] for All\n";
  cout << "Yor choise is: ";
  cin >> choise;
  return choise;
}

enOddOrEven CheckOddOrEven(int N) {
 if(N % 2 == 0 || N % 2 != 0)
 {
     return enOddOrEven::All;
 }
 else {
    if (N % 2 ==0)
    {
        return enOddOrEven::Even;
    }
    else {
    return enOddOrEven::Odd;
}
}

}

int SumWhatNumberFrom1ToN_UsingFor(int N, int choise) {

  int sum = 0; // Alwaysinitial value

  cout << "Range printed using While statement:\n";
  if (choise == 1) {
    for (int i = 1; i <= N; i++) {
      if (CheckOddOrEven(i) == enOddOrEven::Even)
        sum += i;
    }
  } else if (choise == 2) {
    for (int i = 1; i <= N; i++)

      if (CheckOddOrEven(i) == enOddOrEven::Odd)
        sum += i;
  } else if (choise == 3) {

    for (int i = 1; i <= N; i++)

      if (CheckOddOrEven(i) == enOddOrEven::All)
        sum += i;
  }
  return sum;
}

int main()
{

    int N = ReadNumber(); /*Why i did't use functio ReadNumber entir other Functions? Because i wanna to Read Number just on time'*/
    int choise = CheckChoise();

   cout <<SumWhatNumberFrom1ToN_UsingFor(N,choise) << endl;
}
