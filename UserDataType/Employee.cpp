#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::TAX = 0.01f;

void Employee::Read()
{
	cout << "Please enter your first name - ";
	cin >> name;

	cout << "Please enter your age - ";
	cin >> age;

	cout << "Please enter your zipcode - ";
	cin >> zipcode;

	cout << "Please enter your wage - ";
	cin >> wage;

	cout << "Please enter how many days you have worked - ";
	cin >> daysWorked;

	for (int i = 0; i < daysWorked; i++) {
		cout << "Enter hours worked for day " << i + 1 << ": ";
		cin >> hoursWorkedPerDay[i];
	}

	totalHours = 0;

	for (int i = 0; i < daysWorked; i++) {
		int currentHours = hoursWorkedPerDay[i];
		totalHours += currentHours;
	}

	grossIncome = totalHours * wage;

	netIncome = grossIncome - (grossIncome * TAX);
}

void Employee::Write()
{
	cout << name << " worked for " << totalHours << " hours at $" << wage << " per hour\n";
	cout << "Gross Income - $" << grossIncome << endl;
	cout << "Net Income - $" << netIncome << endl << endl;
}