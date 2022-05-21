#ifndef student_angajat
#define student_angajat

#include "Angajat.h"
#include "Student.h"

class Student_Angajat:public Angajat,public Student{

public:

    Student_Angajat();
    Student_Angajat(int ,int ,int ,int ,int *);
    Student_Angajat(const Student_Angajat &);
    ~Student_Angajat();
    Student_Angajat& operator=(const Student_Angajat &);
    void afisare();
    int getVenit();

}; //venitul unui student angajat pe luna e salariul + bursa (=5000) sau 0 daca nu are bursa

#endif // student_angajat
