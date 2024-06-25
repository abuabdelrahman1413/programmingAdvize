#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	fstream myFile;
	myFile.open("myFile.txt", ios::out); // write mode

	if(myFile.is_open())
	{
		myFile << "Heelo\n";
		myFile.close();
	}
}
