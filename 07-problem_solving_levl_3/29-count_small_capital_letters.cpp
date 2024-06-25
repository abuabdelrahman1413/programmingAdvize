#include <iostream>
#include <string>

using namespace std;

string ReadString()
{
	string str;
	cout << "Enter a string: ";
	getline(cin, str);
	return str;
}

enum enWhatToCount {SmallLetters = 0, CapitalLetters = 1, All = 2};

short countLetters(string str, enWhatToCount WhatToCount=enWhatToCount::All)
{
  int count = 0;
  for(int i = 0; i < str.length(); i++) 
  {

    if(WhatToCount == enWhatToCount::All)
      return str.length();

    if(WhatToCount == enWhatToCount::CapitalLetters && isupper(str[i]))
      count ++;

    if(WhatToCount == enWhatToCount::SmallLetters && islower(str[i]))
      count ++;
  }
  return count;
}

int countCapitalLetters(string str)
{
  int count = 0;
  for(short i = 0; i < str.length(); i++)
  {
    if(!islower(str[i]))
      count++;
  }
  return count;
}

int countSmallLetters(string str)
{
    int count = 0;
  for(short i = 0; i < str.length(); i++)
  {
    if(islower(str[i]))
      count++;
  }
  return count;
}

int main()
{
  string str = ReadString();

  cout << "\nstring length = " << str.length();
  cout << "\ncapital letters in string = " << countCapitalLetters(str);
  cout << "\nsmall letters in string = " << countSmallLetters(str);
  cout << "\nsmall letters in string = " << countLetters(str, enWhatToCount(0));


  return 0;
}