#include <iostream>
using namespace std;

void PrcharAllLettersFromAAAToZZZ()
{
	for (char i = 65; i <= 90; i++)
	{
		for (char j = 65; j <= 90; j++)
		{
			for (char k =65; k <= 90; k++)
			{
				
				cout << i << j << k;
				cout << endl;
			}
		}

		cout << "\n_____________________________________________________________\n";
	}
}

int main()
{
	PrcharAllLettersFromAAAToZZZ();
}
