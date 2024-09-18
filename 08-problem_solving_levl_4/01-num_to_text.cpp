#include <iostream>
#include <string>
#include <vector>

using namespace std;

string NumberToText(int Number) {
  if (Number == 0) {
    return "";
  }

  if (Number >= 1 && Number <= 19) {
    string array[] = {"",        "One",       "Two",      "Three",
                      "Four",    "Five",      "Six",      "Seven",
                      "Eight",   "Nine",      "Ten",      "Eleven",
                      "Twelve",  "Thirteen",  "Fourteen", "Fifteen",
                      "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

    return array[Number];
  }

  if (Number >= 20 && Number <= 99) {
    string array[] = {"",      "",      "Twenty",  "Thirty", "Forty",
                      "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
    return array[Number / 10] + " " + NumberToText(Number % 10);
  }

  if (Number >= 100 && Number <= 199) {
    string array = "One Hundred";
    return array + " " + NumberToText(Number % 100);
  }

  if (Number >= 200 && Number <= 999) {
    return NumberToText(Number / 100) + " Hundreds " +
           NumberToText(Number % 100);
  }

  if (Number >= 1000 && Number <= 999999) {
    return NumberToText(Number / 1000) + " Thousands " +
           NumberToText(Number % 1000);
  }
}

int ReadNumber() {
  int num;
  cout << "Enter a number: ";
  cin >> num;
  return num;
}

int main() {
  int Number = ReadNumber();
  cout << NumberToText(Number) << endl;

  return 0;
}