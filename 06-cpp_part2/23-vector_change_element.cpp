#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> vNumbers;
	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(40);
	vNumbers.push_back(50);

	// change element
	vNumbers[0] = 100;
	vNumbers.at(2) = 200;

	// initial vector
	cout << "Initial vector: ";
	for (const int &i : vNumbers) {
		cout << i << " ";
	}
	cout << endl;

	// updated vector
	cout << "Updated vector: ";
	for (int & i: vNumbers) {
		i = 20;
		cout << i << " ";
	}
	cout << endl;
	// display vector
	for(int i = 0; i < vNumbers.size(); i++)
	{
		cout << vNumbers[i] << " ";
	}

}
