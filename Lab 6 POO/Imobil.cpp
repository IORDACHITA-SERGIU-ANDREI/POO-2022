#include "Imobil.h"

Imobil::Imobil()
{
    venit_pe_an=0;
    imbunatatiri=NULL;
    strcpy(imbunatatiri,"imbun_imobil");
}

Imobil::Imobil(char b[],double a,double c,char *d):Proprietate(b,a)
{
    venit_pe_an=c;
    imbunatatiri=new char[strlen(d)+1];
    strcpy(imbunatatiri,d);
}

Imobil::Imobil(const Imobil &p):Proprietate(p)
{
    venit_pe_an=p.venit_pe_an;
    imbunatatiri=new char[strlen(p.imbunatatiri)+1];
    strcpy(imbunatatiri,p.imbunatatiri);
}

Imobil::~Imobil()
{
    delete[] imbunatatiri;
}

Imobil &Imobil::operator=(const Imobil &v)
{
    strcpy(cod,v.cod);
    valoare=v.valoare;
    venit_pe_an=v.venit_pe_an;
    imbunatatiri=new char[strlen(v.imbunatatiri)+1];
    strcpy(imbunatatiri,v.imbunatatiri);

    return *this;
}

ostream &operator<<(ostream &s1,const Imobil &x)
{
    s1<<"\nCodul Imobilului este: "<<x.cod<<endl;
    s1<<"\nValoarea Imobilului este: "<<x.valoare<<endl;
    s1<<"\nVenit_pe_an al Imobilului este: "<<x.venit_pe_an<<endl;
    s1<<"\nImbunatatiri al imobilului: "<<x.imbunatatiri<<endl;
    return s1;
}

istream &operator>>(istream &s2,Imobil &x)
{
    char aux[50];
    cout<<"Cod : ";
    s2>>x.cod;
    cout<<"Valoare : ";
    s2>>x.valoare;
    cout<<"Venit_pe_an : ";
    s2>>x.venit_pe_an;
    cout<<"Imbunatatiri : ";
    s2>>aux;
    if(x.imbunatatiri!=NULL)
        delete[] x.imbunatatiri;
    x.imbunatatiri=new char[strlen(aux)+1];
    strcpy(x.imbunatatiri,aux);
    return s2;
}

double Imobil::getValoare()
{
    return valoare;
}

void Imobil::afis()
{
    Proprietate::afis();
    cout<<"Venit_pe_an imobil :"<<venit_pe_an<<endl;
    cout<<"Imbunatatiri :"<<imbunatatiri<<endl;
}

void Imobil::schimbare(Imobil &a,Imobil &b)
{
    Imobil aux;

    strcpy(aux.cod,a.cod);
    aux.valoare=a.valoare;
    aux.venit_pe_an=a.venit_pe_an;
    aux.imbunatatiri=new char[strlen(a.venit_pe_an)+1];
    strcpy(aux.imbunatatiri,a.imbunatatiri);

    strcpy(a.cod,b.cod);
    a.valoare=b.valoare;
    a.venit_pe_an=b.venit_pe_an;
    free(a.imbunatatiri);
    a.imbunatatiri=new char[strlen(b.venit_pe_an)+1];
    strcpy(a.imbunatatiri,b.imbunatatiri);

    strcpy(b.cod,aux.cod);
    b.valoare=aux.valoare;
    b.venit_pe_an=aux.venit_pe_an;
    free(b.imbunatatiri);
    b.imbunatatiri=new char[strlen(aux.venit_pe_an)+1];
    strcpy(b.imbunatatiri,aux.imbunatatiri);
}






