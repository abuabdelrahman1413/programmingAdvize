#include <iostream>
using namespace std;

struct stEmployee
{
	string name;
	float salary;
};

int main()
{
	stEmployee Employee, *pEmployee;
	Employee.name = "Ahmed";
	Employee.salary = 20000.00;
	pEmployee = &Employee;

	cout << "Using pointers" << endl;
	pEmployee->name = "Mohamed";
	cout << pEmployee->name << endl;
	cout << pEmployee->salary << endl;
	return 0;
}
