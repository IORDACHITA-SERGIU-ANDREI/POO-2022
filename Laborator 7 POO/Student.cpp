#include "Student.h"

Student::Student()
{
    id_student=0;
    n=0;
    note=new int[n];
    for(int i=0;i<n;i++)
    {
        note[i]=0;
    }
}

Student::Student(int a,int b,int *c)
{
    id_student=a;
    n=b;
    note=new int[b];
    for(int i=0;i<b;i++)
    {
        note[i]=c[i];
    }
}

Student::Student(const Student &p)
{
    id_student=p.id_student;
    n=p.n;
    note=new int[p.n];
    for(int i=0;i<p.n;i++)
    {
        note[i]=p.note[i];
    }
}

Student::~Student()
{
    delete[] note;
}

Student &Student::operator=(const Student &v)
{
    id_student=v.id_student;
    n=v.n;
    note=new int[v.n];
    for(int i=0;i<v.n;i++)
    {
        note[i]=v.note[i];
    }

    return *this;
}

void Student::afisare()
{
    cout<<"Id_student : "<<id_student<<endl;
    cout<<"Nr note : "<<n<<endl;
    cout<<"Notele sunt : ";
    for(int i=0;i<n;i++)
    {
        cout<<note[i]<<" ";
    }
    cout<<endl;
}

int Student::getVenit()
{
    float medie=0;
    int ok=0;
    for(int i=0;i<n;i++)
    {
        medie=medie+note[i];
        if(note[i]<5)
            ok=1;
    }
    medie=medie/n;

    if(ok==1 && medie>8.5)
        return 0;
    else if(ok==1 && medie<=8.5)
        return 0;
    else if(ok==0 && medie<=8.5)
        return 0;
    else
        return 700;
}



