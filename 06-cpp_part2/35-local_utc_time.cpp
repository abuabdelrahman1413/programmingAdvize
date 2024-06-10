 #pragma warning(disable : 4996)
#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t now = time(0); // time now
	cout << "UTC time: " << ctime(&now) << endl; // print UTC time
	char * sUtcTime = ctime(&now);
	 cout << "UTC time: " << sUtcTime << endl;
	return 0;
}

