#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    Student s1;
    Student s2;
    Student s3;
    Student s4;

    float avgOOC, avgSPM, avgISDM;

    s1.setStudentDetails(1234, "Kamal");
    s1.setMarksOOC(85);
    s1.setMarksSPM(80);
    s1.setMarksISDM(75);

    s2.setStudentDetails(4567, "Saman");
    s2.setMarksOOC(65);
    s2.setMarksSPM(50);
    s2.setMarksISDM(45);

    s3.setStudentDetails(7891, "Nimal");
    s3.setMarksOOC(98);
    s3.setMarksSPM(75);
    s3.setMarksISDM(80);

    s4.setStudentDetails(1212, "Sunil");
    s4.setMarksOOC(35);
    s4.setMarksSPM(60);
    s4.setMarksISDM(40);

    avgOOC = (s1.getMarksOOC() + s2.getMarksOOC() + s3.getMarksOOC() + s4.getMarksOOC()) / 4.0;
    avgSPM = (s1.getMarksSPM() + s2.getMarksSPM() + s3.getMarksSPM() + s4.getMarksSPM()) / 4.0;
    avgISDM = (s1.getMarksISDM() + s2.getMarksISDM() + s3.getMarksISDM() + s4.getMarksISDM()) / 4.0;

    cout << "Average OOC Mark : " << avgOOC << endl;
    cout << "Average SPM Mark : " << avgSPM << endl;
    cout << "Average ISDM Mark : " << avgISDM << endl;
}
