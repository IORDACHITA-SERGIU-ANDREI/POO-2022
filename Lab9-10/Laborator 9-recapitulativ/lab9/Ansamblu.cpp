#include "Ansamblu.h"

Ansamblu::Ansamblu():pa()
{
    vec=NULL;
    nr_caracteristici=0;
    caracteristici=NULL;
}

Ansamblu::Ansamblu(Piesa_A x1,Piesa_B *x2,int x3,string *x4)
{
    pa=x1;
    vec=new Piesa_B[pa.getGauri()];
    for(int i=0;i<pa.getGauri();i++)
    {
        vec[i]=x2[i];
    }
    nr_caracteristici=x3;
    caracteristici=new string[x3];
    for(int i=0;i<x3;i++)
    {
        caracteristici[i]=x4[i];
    }
}

Ansamblu::Ansamblu(const Ansamblu &p)
{
    pa=p.pa;
    vec=new Piesa_B[p.pa.getGauri()];
    for(int i=0;i<p.pa.getGauri();i++)
    {
        vec[i]=p.vec[i];
    }
    nr_caracteristici=p.nr_caracteristici;
    caracteristici=new string[p.nr_caracteristici];
    for(int i=0;i<p.nr_caracteristici;i++)
    {
        caracteristici[i]=p.caracteristici[i];
    }
}

Ansamblu::~Ansamblu()
{
    delete[] caracteristici;
    delete[] vec;
}

Ansamblu &Ansamblu::operator=(const Ansamblu &v)
{
    pa=v.pa;
    vec=new Piesa_B[v.pa.getGauri()];
    for(int i=0;i<v.pa.getGauri();i++)
    {
        vec[i]=v.vec[i];
    }
    nr_caracteristici=v.nr_caracteristici;
    caracteristici=new string[v.nr_caracteristici];
    for(int i=0;i<v.nr_caracteristici;i++)
    {
        caracteristici[i]=v.caracteristici[i];
    }

    return *this;
}

void Ansamblu::afisare()
{
    pa.afisare();
    for(int i=0;i<pa.getGauri();i++)
    {
        vec[i].afisare();
    }
    cout<<"Nr caracteristici : "<<nr_caracteristici<<endl;
    cout<<"Caracteristicile : ";
    for(int i=0;i<nr_caracteristici;i++)
    {
        cout<<caracteristici[i];
    }
    cout<<endl;
}

int Ansamblu::getPret() const
{
    int suma=0;
    for(int i=0;i<pa.getGauri();i++)
    {
        suma=suma+vec[i].getPret();
    }
    return pa.getPret()+suma;
}

void Ansamblu::creareFisier()
{
    ofstream fisier("FisierObiecte.txt",ios::app);

    pa.creareFisier();
    for(int i=0;i<pa.getGauri();i++)
    {
        vec[i].creareFisier();
    }
    fisier<<nr_caracteristici<<" ";
    for(int i=0;i<nr_caracteristici;i++)
    {
        fisier<<caracteristici[i];
    }
    fisier<<" ";

    fisier.close();
}
