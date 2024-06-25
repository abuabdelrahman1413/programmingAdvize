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

/*void printnumberpattern(int number)
{	cout << endl;
	int n=0;
	while (number != 0) //can use for(int i =number; i>=1; i--)
	{
		n++;
		for (int i = 1; i <= n; i++)
		{
			cout << char(n+64);
		}
		number--;
		cout << endl;
	}
}
*/

void printnumberpattern(int number)
{
	cout << endl;
	for (int i=65; i <= 65+number-1; i++)
	{
		for (int j=1; j <= i-65+1; j++)
		{
			cout << char(i);
		}
		cout << endl;
	}
}

int main()
{
	printnumberpattern(readpositivenumber("please enter a number: "));
} 
