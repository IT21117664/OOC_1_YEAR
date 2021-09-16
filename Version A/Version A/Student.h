#pragma once
class Student
{
private:
	int studentID;
	char studentName[20];
	int marksOOC, marksSPM, marksISDM;

public:
	void setStudentDetails(int pStudentID, const char pstudentName[]);
	void setMarksOOC(int pmarksOOC);
	int getMarksOOC();
	void setMarksSPM(int pmarksSPM);
	int getMarksSPM();
	void setMarksISDM(int pmarksISDM);
	int getMarksISDM();
};

