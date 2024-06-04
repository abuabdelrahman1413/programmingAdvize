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

int main() {
  vector<string> vFiles;
  LoadDataFromFileToVector("myFile.txt", vFiles);
  for (string &line : vFiles) {
    cout << line << endl;
  }
}
