#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	// Declear iterator with same type of vector
	vector<int>::iterator iter;
	for(iter = vNumbers.begin(); iter != vNumbers.end(); iter++)
	{
		cout << *iter << " ";
	}
}
