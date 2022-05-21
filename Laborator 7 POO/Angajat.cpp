#include "Angajat.h"

Angajat::Angajat()
{
    id_angajat=0;
    salariu=0;
}

Angajat::Angajat(int a,int b)
{
    id_angajat=a;
    salariu=b;
}

void Angajat::afisare()
{
    cout<<"Id_angajat : "<<id_angajat<<endl;
    cout<<"Salariu : "<<salariu<<endl;
}

int Angajat::getVenit()
{
    return salariu;
}
