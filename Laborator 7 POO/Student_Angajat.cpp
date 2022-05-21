#include "Student_Angajat.h"

Student_Angajat::Student_Angajat():Angajat(),Student()
{

}

Student_Angajat::Student_Angajat(int a,int b,int c,int d,int *e):Angajat(a,b),Student(c,d,e)
{

}

Student_Angajat::Student_Angajat(const Student_Angajat &p):Angajat(p),Student(p)
{

}

Student_Angajat::~Student_Angajat()
{

}

Student_Angajat &Student_Angajat::operator=(const Student_Angajat &v)
{
    Angajat::operator=(v);
    (Angajat&)(*this)=v;
    Student::operator=(v);
    (Student&)(*this)=v;

    return *this;
}

void Student_Angajat::afisare()
{
    Angajat::afisare();
    Student::afisare();
}

int Student_Angajat::getVenit()
{
    return Angajat::getVenit()+Student::getVenit();
}

