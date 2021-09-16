#include <iostream>
#include <iomanip>
#include "Lab.h"


using namespace std;

int main()
{
	Lab l1;
	char rmb[4];
	Lab l2;
	Lab l3;
	
	int inputCapacity;

	l1.setLabDetails(401, 60);
	l2.setLabDetails(402, 40);
	l3.setLabDetails(403, 30);

	cout << "Insert capasity : ";
	cin >> inputCapacity;

	if (inputCapacity <= l3.getCapacity()) {
		cout << "Lab 403" << endl;
	}else if (inputCapacity <= l2.getCapacity()) {
		cout << "Lab 402" << endl;
	}else if (inputCapacity <= l1.getCapacity()) {
		cout << "Lab 401" << endl;
	}
	
	//cout << setw(12) << setiosflags(ios::fixed) << setprecision(3) << 25.695789 << endl;
}
