#include <stdlib.h>
#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

struct stEmployee
{
	string name;
	int age;
	float salary;
};

int main (int argc, char *argv[]) {
		vector <stEmployee> vEmployee;
		stEmployee temp;

		temp.name = "Mohammed";
		temp.age = 30;
		temp.salary = 10000.00;
		vEmployee.push_back(temp);

		temp.name = "Ahmed";
		temp.age = 40;
		temp.salary = 20000.00;
		vEmployee.push_back(temp);

		temp.name = "Ali";
		temp.age = 50;
		temp.salary = 30000.00;
		vEmployee.push_back(temp);

		temp.name = "Mahmoud";
		temp.age = 60;
		temp.salary = 40000.00;
		vEmployee.push_back(temp);

		temp.name = "Hossam";
		temp.age = 70;
		temp.salary = 50000.00;
		vEmployee.push_back(temp);


		cout  << "Employee vector: \n\n" ;

		for(stEmployee Employee : vEmployee)
		{
			cout << "Name: " << Employee.name << endl;
			cout << "Age: " << Employee.age << endl;
			cout << "Salary: " << Employee.salary << endl;
			cout << endl;
		}

		for(stEmployee &Employee : vEmployee)
		{
			cout << "Name: " << Employee.name << endl;
			cout << "Age: " << Employee.age << endl;
			cout << "Salary: " << Employee.salary << endl;
			cout << endl;
		}


		cout << endl;
	
	return 0;
}
