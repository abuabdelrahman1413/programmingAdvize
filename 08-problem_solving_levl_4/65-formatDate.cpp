#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct sDate {
  short Year;
  short Month;
  short Day;
};
string ReadDateString() {
    string date;
    cout << "Please enter date in format dd/mm/yyyy: ";
    getline(cin >> ws, date);
    return date;
}




vector<string> split(string str, string delim)
{
	vector<string> vSplit;
	short pos = 0;
	string word;
	while ((pos = str.find(delim)) != std::string::npos)
	{
		word = str.substr(0, pos);
		if (str != "")
		{
			vSplit.push_back(word);
		}
		str = str.erase(0, pos + delim.length());
	}
	if (str != "")
	{
		vSplit.push_back(str);
	}
	return vSplit;
}

string joinString(vector<string> vString, string delim){
	string str;
	for(string &word : vString){
		str = str + word + delim;
	}

	return str.substr(0, str.length() - delim.length());
}

string ReplaceWord(string str, string word, string newWord)
{
	vector<string> vString = split(str, " ");
	for (string &s : vString)
	{
		if (s == word)
		{
			s = newWord;
		}
	}
	
	return joinString(vString, " ");

}

sDate StringToDate(string date) {
  vector<string> vSplit = split(date, "/");
  sDate Date;
  Date.Year = stoi(vSplit[2]);
  Date.Month = stoi(vSplit[1]);
  Date.Day = stoi(vSplit[0]);
  return Date;
}

string DateToString(sDate Date) {
  string date = to_string(Date.Day) + "/" + to_string(Date.Month) + "/" +
                to_string(Date.Year);
  return date;
}

string FormatDate(sDate Date, string format = "dd/mm/yyyy") {
  string ForamatedDate = "";
  ForamatedDate = ReplaceWord(format, "dd", to_string(Date.Day));
//   ForamatedDate = ReplaceWord(ForamatedDate, "mm", to_string(Date.Month));
//   ForamatedDate = ReplaceWord(ForamatedDate, "yy", to_string(Date.Year));

return ForamatedDate;
}
int main(void) {

    string date = ReadDateString();
    sDate Date = StringToDate(date);
    cout << "\n" << FormatDate(Date) << endl;
    cout << "\n" << FormatDate(Date, "yyyy/mm/dd") << endl;
    cout << "\n" << FormatDate(Date, "mm/dd/yyyy") << endl;
    cout << "\n" << FormatDate(Date, "dd-mm-yyyy") << endl;
    cout << "\n" << FormatDate(Date, "mm-dd-yyyy") << endl;

    cout << "\n" << FormatDate(Date, "Day: dd, Month: mm, Year: yyyy") << endl;
  return 0;
}