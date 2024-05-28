#include <cstddef>
#include <ctime>
#include <iostream>
#include <cstdlib>
using namespace std;

int RandomNumber(int From, int To)
{
	int RandomNumber = rand()%(To - From + 1) + From ;

	return RandomNumber;
}

int main()
{
	srand((unsigned) time(NULL));  //one time in main function

	cout << RandomNumber(1,10 ) << endl;
	cout << RandomNumber(65,90 ) << endl;
	cout << RandomNumber(97,122 ) << endl;

	return 0;
}


