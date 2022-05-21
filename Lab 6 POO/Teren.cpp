#include "Teren.h"

Teren::Teren()
{
    venit_pe_luna_m2=0;
    suprafata=0;
}

Teren::Teren(char b[],double a,double c,double d):Proprietate(b,a)
{
    venit_pe_luna_m2=c;
    suprafata=d;
}

ostream &operator<<(ostream &s1,const Teren &x)
{
    s1<<"\nCodul terenului este: "<<x.cod<<endl;
    s1<<"\nValoarea terenului este: "<<x.valoare<<endl;
    s1<<"\nVenitul pe luna pt m2 este: "<<x.venit_pe_luna_m2<<endl;
    s1<<"\nSuprafata terenului este: "<<x.suprafata<<endl;
    return s1;
}

istream &operator>>(istream &s2,Teren &x)
{
    cout<<"Cod Teren :";
    s2>>x.cod;
    cout<<"Valoare :";
    s2>>x.valoare;
    cout<<"Venitul terenului pe luna pt m2 : ";
    s2>>x.venit_pe_luna_m2;
    cout<<"Suprafata terenului este : ";
    s2>>x.suprafata;
    return s2;
}

double Teren::getValoare()
{
    return valoare;
}

void Teren::afis()
{
    Proprietate::afis();
    cout<<"Venit_pe_luna_m2 imobil :"<<venit_pe_luna_m2<<endl;
    cout<<"Suprafata :"<<suprafata<<endl;
}

void Teren::schimbare(Teren &a,Teren &b)
{
    Teren aux;

    strcpy(aux.cod,a.cod);
    aux.valoare=a.valoare;
    aux.venit_pe_luna_m2=a.venit_pe_luna_m2;
    aux.suprafata=a.suprafata;

    strcpy(a.cod,b.cod);
    a.valoare=b.valoare;
    a.venit_pe_luna_m2=b.venit_pe_luna_m2;
    a.suprafata=b.suprafata;

    strcpy(b.cod,aaux.cod);
    b.valoare=aux.valoare;
    b.venit_pe_luna_m2=aux.venit_pe_luna_m2;
    b.suprafata=aux.suprafata;
}



