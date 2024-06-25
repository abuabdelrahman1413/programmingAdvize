#include <complex>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void LoadDataFromFileToVector(string fileName, vector<string> &vFiles) {
  fstream myFile;
  myFile.open(fileName, ios::in);

  if (myFile.is_open()) {
    string line;
    while (getline(myFile, line)) {
      vFiles.push_back(line);
    }
    myFile.close();
  }
}

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

void DeleteRecordFromFile(string filename, string record)
{
	vector <string> vFileContent;
	LoadDataFromFileToVector(filename, vFileContent);
	for(string &line : vFileContent)
	{
		if(line == record)
		{
			line = "";
		}
	}
	SaveVectorToFile(filename, vFileContent);
}

void PrintFileContenet(string FileName) {
  fstream MyFile;
  MyFile.open(FileName, ios::in);
  // read Mode
  if (MyFile.is_open()) {
    string Line;
    while (getline(MyFile, Line)) {
      cout << Line << endl;
    }
    MyFile.close();
  }
}

int main()
{
	cout << "File content Before Delete.\n";
	PrintFileContenet("myFile.txt");

	DeleteRecordFromFile("myFile.txt", "Ali");

	cout << "File content After Delete.\n";
	PrintFileContenet("myFile.txt");

	return 0;
}
