#include <iostream>
#include <string.h>
#include "Angajat.h"
using namespace std;

Angajat::Angajat()
{
    nume=NULL;
    strcpy(CNP,"00000000000000");
    salariu=0;
}

Angajat::Angajat(char *p,char c[],int x)
{
    nume=new char[strlen(p)];
    strcpy(nume,p);
    strcpy(CNP,c);
    salariu=x;
}

Angajat::Angajat(const Angajat &q)
{
    cout<<"Constructor de copiere"<<endl;
    nume=new char[strlen(q.nume)];
    strcpy(nume,q.nume);
    strcpy(CNP,q.CNP);
    salariu=q.salariu;
}

Angajat::~Angajat()
{
    delete[] nume;
}

void Angajat::afisare() const
{
    cout<<"Nume : "<<nume<<endl;
    cout<<"CNP : "<<CNP<<endl;
    cout<<"Salariu : "<<salariu<<endl;
}

void Angajat::modificare(const Angajat &w)
{
    nume=new char[strlen(w.nume)];
    strcpy(nume,w.nume);
    strcpy(CNP,w.CNP);
    salariu=w.salariu;
}

int Angajat::getSalariu() const
{
    return salariu;
}

bool Angajat::eFemeie() const
{
    if(CNP[0]=='2' || CNP[0]=='4' || CNP[0]=='6')
        return true;
    return false;
}

char* Angajat::getName()
{
    return nume;
}

void Angajat::schimbare(Angajat &a,Angajat &b)
{
    Angajat aux;

    aux.nume=new char[strlen(a.nume)];
    strcpy(aux.nume,a.nume);
    strcpy(aux.CNP,a.CNP);
    aux.salariu=a.salariu;

    free(a.nume);
    a.nume=new char[strlen(b.nume)];
    strcpy(a.nume,b.nume);
    strcpy(a.CNP,b.CNP);
    a.salariu=b.salariu;

    free(b.nume);
    b.nume=new char[strlen(aux.nume)];
    strcpy(b.nume,aux.nume);
    strcpy(b.CNP,aux.CNP);
    b.salariu=aux.salariu;
}

