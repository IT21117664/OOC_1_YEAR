#include "Lab.h"

void Lab::setLabDetails(int plabID, int pcapacity)
{
	labID = plabID;
	capacity = pcapacity;
}

int Lab::getCapacity()
{
	return capacity;
}
