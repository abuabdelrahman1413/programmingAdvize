#include <iostream>
using namespace std;

int main()
{
	int num;

	cout << "Enter total number of students: ";
	cin >> num;

	int *ptr;

	ptr = new int[num];

	cout << "Enter grades of students: " << endl;

	for(int i = 0; i < num; i++)
	{
		cout << "Student " << i + 1 << " : ";
		//cin >> *ptr++; // if i do that it's will be problem when i want to print the array because the addres will increased until will be out side of array.
		cin >> *(ptr+i);
	}

	cout << "\nGrades of students: " << endl;
	for(int i = 0; i < num; i++)
	{
		cout << "Student" << i+1 << " : " << *(ptr+i) << endl;
	}

	delete [] ptr; // this will delete the array.
	return 0;


}
