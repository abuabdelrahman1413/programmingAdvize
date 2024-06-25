#include <iostream>
#include <vector>
using namespace std;

/**
* Remove last element from vector
*/

int main()
{
	vector <int> vNumbers = {10, 20, 30, 40, 50};
	// delete last element
	// vNumbers.pop_back();
	// vNumbers.pop_back();
	// vNumbers.pop_back();
	// vNumbers.pop_back();
	// vNumbers.pop_back();
	// vNumbers.push_back(97);

	// if(!vNumbers.empty())
	// 	vNumbers.pop_back();
	// if(vNumbers.empty())
	// 	vNumbers.push_back(18);
	
	// clear vector
	vNumbers.clear();
	
	cout << "Numbers Vector = ";

	//range based for loop
	for (int & Number : vNumbers)
	{
		cout << Number << " ";
	}
	cout << endl;
	return 0;
}
