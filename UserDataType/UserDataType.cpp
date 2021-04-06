// UserDataType.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Employee.h"
#include <iostream>
using namespace std;

int main()
{
    Employee employees[5];

    unsigned short numEmployees;
    cout << "Enter the number of employees: ";
    cin >> numEmployees;

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Employee #" << i + 1 << endl;
        employees[i].Read();
    }

    for (int i = 0; i < numEmployees; i++)
    {
        cout << "Employee #" << i + 1 << endl;
        employees[i].Write();
    }
}

