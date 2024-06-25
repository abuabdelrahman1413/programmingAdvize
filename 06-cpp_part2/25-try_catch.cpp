#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector <int> vNums  = {1, 2 ,3, 4};
	try {
	cout << vNums.at(10);
	} catch (...) {
		cout << "Exception caught" << endl;
	
	}
}
