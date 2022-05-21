#include <iostream>
#include <string.h>
#include "Teren.h"
#include "Imobil.h"
using namespace std;

int main()
{
    // Verificare metode implementate

 /*   Proprietate x1;
    cout<<x1;
    Proprietate x2("qqq",0);
    cout<<x2;
    Proprietate x3(x2);
    cout<<x3;
    Proprietate x4;
    x4=x1;
    cout<<x4;
    cout<<endl;
    Proprietate x5;
    cin>>x5;
    cout<<x5;

    cout<<"---------------------------------------"<<endl;

    Imobil t1;
    cout<<t1;
    Imobil t2("qqq",0,125,"merge");
    cout<<t2;
    Imobil t3(t2);
    cout<<t3;
    Imobil t4;
    t4=t3;
    cout<<t4;
    cout<<endl;
    Imobil t5;
    cin>>t5;
    cout<<t5;

    cout<<"---------------------------------------"<<endl;

    Teren te1;
    cout<<te1;
    Teren te2("qqq",0,125,900);
    cout<<te2;
    Teren te3(te2);
    cout<<te3;
    Teren te4;
    te4=te3;
    cout<<te4;
    cout<<endl;
    Teren te5;
    cin>>te5;
    cout<<te5;

    cout<<"---------------------------------------"<<endl; */

    int n;
    cout<<"Marimea vectorului: ";
    cin>>n;

    Proprietate** p = new Proprietate*[n];
    int aux;

    char cod[6];
    double valoare;
    double venit_pe_an_imobil2;
    char *imbunatiri2=new char[50];
    double venit_pe_luna_m2_teren;
    double suprafata_teren;

    cout<<"Introduceti : 0-pentru Proprietate , 1-pentru Imobil , 2-pentru Teren"<<endl;

    for(int i=0;i<n;i++)
    {
        cin>>aux;
      while(aux==0 || aux==1 || aux==2){
        if(aux==0)
        {
            cout<<"Introduceti codu: ";
            cin>>cod;
            cout<<"Introduceti valoare: ";
            cin>>valoare;
            p[i] =new Proprietate(cod,valoare);
        }
        else if(aux==1)
        {
            cout<<"Introduceti codu: ";
            cin>>cod;
            cout<<"Introduceti valoare: ";
            cin>>valoare;
            cout<<"Venitul pe an al imobilului: ";
            cin>>venit_pe_an_imobil2;
            cout<<"Imbunatiri ale imobilului: ";
            cin>>imbunatiri2;
            p[i] =new Imobil(cod,valoare,venit_pe_an_imobil2,imbunatiri2);
        }
        else if(aux==2)
        {
            cout<<"Introduceti codu: ";
            cin>>cod;
            cout<<"Introduceti valoare: ";
            cin>>valoare;
            cout<<"Venitul pe luna m2 al terenului: ";
            cin>>venit_pe_luna_m2_teren;
            cout<<"Suprafata a terenului: ";
            cin>>suprafata_teren;
            p[i] =new Teren(cod,valoare,venit_pe_luna_m2_teren,suprafata_teren);
        }
        aux=4;
    }
    cout<<"Doriti sa mai apelati si altceva , daca da apelati 0-pentru Proprietate , 1-pentru Imobil , 2-pentru Teren"<<endl;

    }


    cout<<"--------------------------------------------------------"<<endl;
    cout<<endl<<"Afisare obiecte : "<<endl<<endl;

    // Afisare obiecte stocate

        for(int i=0;i<n;i++)
        {
            cout<<"Proprietatea "<<i+1<<endl;
            p[i]->afis();cout<<endl;
        }

        cout<<"--------------------------------------------------------"<<endl;
        cout<<endl<<"Afisare obiecte cu valoare mai mare de 10000 : "<<endl<<endl;

    // Sortare obiecte in functie de venitul generat pe luna

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( p[i]->getValoare() > p[j]->getValoare() )
            {
            //     p[i]->schimbare(p[i]->getValoare(),p[j]->getValoare());
            }
        }
    }

    // Afisare obiecte cu valoare mai mare de 10000

    for(int i=0;i<n;i++)
    {
        if( p[i]->getValoare() > 10000 )
        {
            p[i]->afis();
            cout<<endl;
        }
    }


    return 0;

}
