#include <iostream>
#include <string.h>
#include "Proprietate.h"
using namespace std;

Proprietate::Proprietate()
{
    strcpy(cod,"aaa");
    valoare=0;
}

Proprietate::Proprietate(char b[],double a)
{
    strcpy(cod,b);
    valoare=a;
}

ostream &operator<<(ostream &s1,const Proprietate &x)
{
    s1<<"\n Codul Proprietatii este: "<<x.cod<<endl<<"Valoarea proprietatii este: "<<x.valoare<<endl;
    return s1;
}

istream &operator>>(istream &s2,Proprietate &x)
{
    cout<<"Cod Proprietate :";
    s2>>x.cod;
    cout<<"Valoare :";
    s2>>x.valoare;
    return s2;
}

double Proprietate::getValoare()
{
    return valoare;
}

void Proprietate::afis()
{
    cout<<"Cod :"<<cod<<endl;
    cout<<"Valoare :"<<valoare<<endl;
}

void Proprietate::schimbare(Proprietate &a,Proprietate &b)
{
    Proprietate aux;

    strcpy(aux.cod,a.cod);
    aux.valoare=a.valoare;

    strcpy(a.cod,b.cod);
    a.valoare=b.valoare;

    strcpy(b.cod,aux.cod);
    b.valoare=aux.valoare;
}


