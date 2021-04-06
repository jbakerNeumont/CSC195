#pragma once

class Employee
{
public:
	static const float TAX;
	void Read();
	void Write();

private:
	char name[32];
	unsigned int age;
	unsigned long int zipcode;
	double wage;
	int daysWorked;
	int hoursWorkedPerDay[7];
	int totalHours;

	double grossIncome;
	double netIncome;
};