#include <fstream>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
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
  PrintFileContenet("MyFile.txt");
  return 0;
}
