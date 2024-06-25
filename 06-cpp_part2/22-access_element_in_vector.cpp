#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> vNumbers {1, 2, 3, 4, 5};
	cout << "\n\n using at(i) \n";
	cout << "Element at index 0: " << vNumbers.at(0) << endl;
	cout << "Element at index 1: " << vNumbers.at(1) << endl;
	cout << "Element at index 2: " << vNumbers.at(2) << endl;
	cout << "Element at index 3: " << vNumbers.at(3) << endl;
	cout << "Element at index 4: " << vNumbers.at(4) << endl;

	cout << "\n\n using operator [] \n";
	cout << "Element at index 0: " << vNumbers[0] << endl;
	cout << "Element at index 1: " << vNumbers[1] << endl;
	cout << "Element at index 2: " << vNumbers[2] << endl;
	cout << "Element at index 3: " << vNumbers[3] << endl;
	cout << "Element at index 4: " << vNumbers[4] << endl;

	return 0;
}
