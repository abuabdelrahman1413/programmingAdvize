#include <iostream>
#include <cstdio>
using namespace std;

int main (int argc, char *argv[]) {
	for(int row = 1; row <= 10; row++ )
		{
				for (int col = 1; col <= 10; col++)
				{
						printf("%02d\t", row * col);
				}
						cout << endl;
		}
	return 0;
}
