#include <iostream>
#include <string.h>
#include "Produs.h"
using namespace std;

Produs::Produs()
{
    strcpy(cod,"aaa");
    pret=0;
}

Produs::Produs(char b[],int a)
{
    strcpy(cod,b);
    pret=a;
}

ostream &operator<<(ostream &s1,const Produs &x)
{
    s1<<"\n Codul produsului este: "<<x.cod<<endl<<"Pretul produsului este: "<<x.pret<<endl;
    return s1;
}

istream &operator>>(istream &s2,Produs &x)
{
    char aux[6];
    cout<<"Cod produs :";
    s2>>aux;
    strcpy(x.cod,aux);
    cout<<"Pret :";
    s2>>x.pret;
    return s2;
}


