#include <iostream>
using namespace std;

void PrintHeader()
{
  cout <<"\n\n\t\t\tMultiplication table from 1 to 10\n\n";
  for(int i=1; i<=10; i++)
  {
    cout<<"\t"<<i;
  }
  cout<<endl<<endl;
  cout<<"__________________________________________________________________________________________________\n";
}

string Serpreator (int i)
{
  if (i<10)
    return "  |";
  else
    return " |";
}



void PrintTable()
{
  for(int i=1; i<=10; i++){
cout<<" "<<i<<Serpreator(i)<<"\t";
for(int j=1; j<=10; j++){
  cout<<i*j<<"\t";
}
cout<<endl;
  }
}

int main()
{
  PrintHeader();
  PrintTable();
}
