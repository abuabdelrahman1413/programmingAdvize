#include<string>
#include<vector>
#include<iostream>
using namespace std;

vector <int>& vReadNumbers(vector <int> & vNumbers)
{
  int ans = 0;
  char AddMore;
  do
  {
    cout << "enter number: ";
    cin >> ans;
    vNumbers.push_back(ans);

    cout << "\nDo you want to add more number ? (Y/N): ";
    cin >> AddMore;

  } while (AddMore == 'y' || AddMore == 'Y');

  return vNumbers;
}

void PrintNumbers (vector <int> & vNumbers)
{
  cout << "\n\nNumbers vector = \n\n";

  for (int& num : vNumbers)
  {
    cout << num << endl;
  }
}

int main() 
{
  vector <int> vNumber;
  
  PrintNumbers(vReadNumbers(vNumber));


  
  return 0;
}
