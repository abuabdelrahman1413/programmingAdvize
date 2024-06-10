
#pragma warning(disable : 4996) 
#include <ctime>
#include <iostream>
/*
 *int tm_sec;     // seconds after the minute - [0, 60] 
 // int tm_min;     // minutes after the hour - [0, 59] 
 // int tm_hour;   // hours since midnight - [0, 23] 
 // int tm_mday;   // day of the month - [1, 31] 
 // int tm_mon;    // months since January - [0, 11] 
 // int tm_year;   // years since 1900 
 // int tm_wday;   // days since Sunday - [0, 6] 
 // int tm_yday;   // days since January 1 - [0, 365] 
 // int tm_isdst;  // daylight savings time flag 
 */
using namespace std;

int main() {
  time_t t = time(0);   // Get current time
  tm* now = localtime(&t); // Convert to local time

  cout << "Year: " << now->tm_year + 1900 << endl;
  cout << "Month: " << now->tm_mon + 1 << endl;
  cout << "Day: " << now->tm_mday << endl;
  cout << "Hour: " << now->tm_hour << endl;
  cout << "Min: " << now->tm_min << endl;
  cout << "Second: " << now->tm_sec << endl;
  cout << "Week Day (Days since sunday): " << now->tm_wday << endl;
  cout << "Year Day (Days since Jan 1st): " << now->tm_yday << endl;
  cout << "hours of daylight savings time:" << now->tm_isdst << endl;

  return 0;
}
