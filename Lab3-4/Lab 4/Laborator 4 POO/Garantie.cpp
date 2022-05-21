#include <iostream>
#include <string.h>
#include "Garantie.h"
using namespace std;

Garantie::Garantie()
{
    nr_luni=0;
    service=NULL;
}

Garantie::Garantie(int a,char *b)
{
    service=new char[strlen(b)+1];
    strcpy(service,b);
    nr_luni=a;
}

Garantie::Garantie(const Garantie &p)
{
    service=new char[strlen(p.service)+1];
    strcpy(service,p.service);
    nr_luni=p.nr_luni;
}

Garantie::~Garantie()
{
    delete[] service;
}

Garantie &Garantie::operator=(const Garantie &v)
{
    if(service!=NULL)
        delete[] service;
    if(v.service!=NULL)
        {service=new char[strlen(v.service)+1];
        strcpy(service,v.service);}
    else
        service=NULL;
    nr_luni=v.nr_luni;

    return *this;
}

ostream &operator<<(ostream &s1,const Garantie &x)
{
    s1<<"\n Service-ul este: "<<x.service<<endl<<"Nr luni garantie: "<<x.nr_luni<<endl;
    return s1;
}

istream &operator>>(istream &s2,Garantie &x)
{
    char a[50];
    cout<<"Service-ul este:";
    s2>>a;
    if(x.service!=NULL)
        delete[] x.service;
    x.service=new char[strlen(a)+1];
    strcpy(x.service,a);
    cout<<"Nr luni garantie:";
    s2>>x.nr_luni;
    return s2;
}

int Garantie::getNr_luni()
{
    return nr_luni;
}

char *Garantie::getService()
{
    return service;
}

