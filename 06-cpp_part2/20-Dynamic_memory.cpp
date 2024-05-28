#include <iostream>
using namespace std;
/*
 * Dynamic memory allocation is the process of allocating memory at runtime 
 * Deleting memory is the process of freeing memory at runtime*/
int main() {
	// declear an int ptr
	int *ptr;

	// declear a float ptr
	float *fptr;

	// dynamic memory allocation
	ptr = new int;
	fptr = new float;

	// assign values
	*ptr = 10;
	*fptr = 10.5;

	cout << *ptr << endl;
	cout << *fptr << endl;

	// deallocating memory
	delete ptr;
	delete fptr;
	return 0;
}
