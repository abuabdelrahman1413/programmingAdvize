
#include <iostream>
using namespace std;

int readpositivenumber(string mesaage)
{
    int number;
    cout <<mesaage;
    cin>>number;
	cout << endl;
    return number;
}

void printnumberpattern(int number)
{	cout << endl;
	int n=0;
	while (number != 0) //can use for(int i =number; i>=1; i--)
	{
		n++;
		for (int i = 1; i <= n; i++)
		{
			cout << n;
		}
		number--;
		cout << endl;
	}
}

int main()
{
	printnumberpattern(readpositivenumber("please enter a number: "));
}
