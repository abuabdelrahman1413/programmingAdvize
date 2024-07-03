#include <cstring>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

string joinString(vector<string> vString, string delim){
	string str;
	for(string &word : vString){
		str = str + word + delim;
	}

	return str.substr(0, str.length() - delim.length());
}
string joinString(string arrString[], int size,string delim){
	string str;
	for(int i = 0 ; i < size; i++){
		str = str + arrString[i] + delim;
	}

	return str.substr(0, str.length() - delim.length());
}


int main(void)
{
	vector<string> vString = {"Mohammed", "Adam", "Ali"};
	string arrString[] = {"Mohammed", "Adam", "Ali"};
	cout << "\nVector after join:\n";
	cout << joinString(vString, " ");

	cout << "\n\nArray after join:\n";
	cout << joinString(arrString, 3, " ");

}
