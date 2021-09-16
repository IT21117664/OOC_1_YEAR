#pragma once
class Employee
{
private:
	int employeeID;
	char employeeName[20];
	int OTHours;
	int OTRate;

public:
	void setEmployeeDetails(int pemployeeID, const char pemployeeName[]);
	void displayEmployeeDetails();
	void setOTHours(int pOTHours);
	void setOTRate(int pOTRate);
	double calculateOTPayment();

};

