#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void SaveVectorToFile(string filename, vector<string> vFiles)
{
	fstream myFile;
	myFile.open(filename, ios::out);
	if(myFile.is_open())
	{
		for(string &line: vFiles)
		{
			if(line != "")
				myFile << line <<endl;
		}
		myFile.close();
	}
}

int main()
{
	vector<string> vFiles{ "ali", "Ali", "Mohamed"};
	SaveVectorToFile("myFile.txt", vFiles);

}
