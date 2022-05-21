#include "Electrocasnic.h"

Electrocasnic::Electrocasnic()
{
    marca=new char[40];
    strcpy(marca,"default");
}

Electrocasnic::Electrocasnic(char b[],int a,char *c):Produs(b,a)
{
    marca=new char[strlen(c)+1];
    strcpy(marca,c);
}

Electrocasnic::Electrocasnic(const Electrocasnic &p):Produs(p)
{
    marca=new char[strlen(p.marca)+1];
    strcpy(marca,p.marca);
}

Electrocasnic::~Electrocasnic()
{
    delete[] marca;
}

Electrocasnic &Electrocasnic::operator=(const Electrocasnic &v)
{
    strcpy(cod,v.cod);
    pret=v.pret;
    marca=new char[strlen(v.marca)+1];
    strcpy(marca,v.marca);

    return *this;
}

ostream &operator<<(ostream &s1,const Electrocasnic &x)
{
    s1<<"\nCodul electrocasnicului este: "<<x.cod<<endl;
    s1<<"\nPretul electrocasnicului este: "<<x.pret<<endl;
    s1<<"\nMarca electrocasnicului este: "<<x.marca<<endl;
    return s1;
}

istream &operator>>(istream &s2,Electrocasnic &x)
{
    char aux[50];
    cout<<"Cod : ";
    s2>>x.cod;
    cout<<"Pret : ";
    s2>>x.pret;
    cout<<"Marca :";
    s2>>aux;
    if(x.marca!=NULL)
        delete[] x.marca;
    x.marca=new char[strlen(aux)+1];
    strcpy(x.marca,aux);
    return s2;
}


