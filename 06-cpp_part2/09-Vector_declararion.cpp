#include<vector>
#include<iostream>
using namespace std;
int main()
{
vector <int> vNums  = {1, 2 ,3, 4};
cout << "Numbers Vector = ";

for(int &N : vNums)
{
	cout << N << " ";
}

cout << endl;
}
