#include "Employee.h"
#include <string>
#include <iostream>

using namespace std;

void Employee::setEmployeeDetails(int pemployeeID, const char pemployeeName[])
{
	employeeID = pemployeeID;
	strcpy_s(employeeName, pemployeeName);

}

void Employee::displayEmployeeDetails()
{
	cout << "Employee ID = " << employeeID << endl;
	cout << "Employee Name = " << employeeName << endl;
}

void Employee::setOTHours(int pOTHours)
{
	OTHours = pOTHours;
}

void Employee::setOTRate(int pOTRate)
{
	OTRate = pOTRate;
}

double Employee::calculateOTPayment()
{
	return OTHours * OTRate;
}
