#include "Student.h"
#include <string>

void Student::setStudentDetails(int pStudentID, const char pstudentName[])
{
	studentID = pStudentID;
	strcpy_s(studentName, pstudentName);
}

void Student::setMarksOOC(int pmarksOOC)
{
	marksOOC = pmarksOOC;
}

int Student::getMarksOOC()
{
	return marksOOC;
}

void Student::setMarksSPM(int pmarksSPM)
{
	marksSPM = pmarksSPM;
}

int Student::getMarksSPM()
{
	return marksSPM;
}

void Student::setMarksISDM(int pmarksISDM)
{
	marksISDM = pmarksISDM;
}

int Student::getMarksISDM()
{
	return marksISDM;
}
