#include <iostream>
#include <string.h>
#include "Produs.h"
using namespace std;

Produs::Produs()
{
    pret=0;
    marca=NULL;
}

Produs::Produs(int a,char *b,const Garantie f)
{
    pret=a;
    marca=new char[strlen(b)+1];
    strcpy(marca,b);
    g=f;
}

Produs::Produs(const Produs &p)
{
    marca=new char[strlen(p.marca)+1];
    strcpy(marca,p.marca);
    pret=p.pret;
    g=p.g;
}

Produs::~Produs()
{
    delete[] marca;
}

Produs &Produs::operator=(const Produs &v)
{
    if(marca!=NULL)
        delete[] marca;
    marca=new char[strlen(v.marca)+1];
    strcpy(marca,v.marca);
    pret=v.pret;
    g=v.g;

    return *this;
}

ostream &operator<<(ostream &s1,const Produs &x)
{
    s1<<"\n Pretul este: "<<x.pret<<endl<<"Marca Produs: "<<x.marca<<endl<<x.g;
    return s1;
}

istream &operator>>(istream &s2,Produs &x)
{
    char aux[50];
    cout<<"Pret :";
    s2>>x.pret;
    if(x.marca!=NULL)
        delete[] x.marca;
    cout<<"Marca :";
    s2>>aux;
    x.marca=new char[strlen(aux)+1];
    strcpy(x.marca,aux);
    s2>>x.g;
    return s2;
}

Garantie Produs::getGarantie()
{
    return g;
}

int Produs::getPret()
{
    return pret;
}
