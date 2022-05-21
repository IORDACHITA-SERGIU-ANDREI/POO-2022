#include <iostream>
#include <string.h>
#include "TV.h"
using namespace std;

int main()
{
    // Verificare metode implementate

    Produs x1;
    cout<<x1;
    Produs x2("qqq",111);
    cout<<x2;
    Produs x3(x2);
    cout<<x3;
    Produs x4;
    x4=x1;
    cout<<x4;
    cout<<endl;
    Produs x5;
    cin>>x5;
    cout<<x5;

    cout<<"---------------------------------------"<<endl;

    Electrocasnic w1;
    cout<<w1;
    Electrocasnic w2("qqq",111,"marcaQQQ");
    cout<<w2;
    Electrocasnic w3(w2);
    cout<<w3;
    Electrocasnic w4;
    w4=w2;
    cout<<w4;
    cout<<endl;
    Electrocasnic w5;
    cin>>w5;
    cout<<w5;

    cout<<"---------------------------------------"<<endl; */

    Electrocasnic elec("elecTV",444,"marcaELEC");
    TV f1;
    cout<<f1;
    TV f2(elec,888,"tv,smart,LG");
    cout<<f2;
    TV f3(f2);
    cout<<f3;
    TV f4;
    f4=f3;
    cout<<f4;
    cout<<endl;
    TV f5;
    cin>>f5;
    cout<<f5;

    cout<<"---------------------------------------"<<endl;




    // Creare vector de obiecte de tip TV

    int n;
    cout<<"Introduceti numarul de televizoare :";
    cin>>n;
    TV *x;
    x=new TV[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }

    // Sortare in functie de diagonala

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if( x[i].getDiagonala()>x[j].getDiagonala() )
            {
                x[i].schimbare(x[i],x[j]);
            }
        }
    }

    cout<<"\nTelevizoare sortate in functie de diagonala : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<x[i];
    }

    // Afisati doar TV-urile cu pret>150, marca “LG” si codul continand secventa “a1”

    for(int i=0;i<n;i++)
    {
        if(x[i].getPret()>150 && strcmp(x[i].getMarca(),"LG")==0 && strcmp(x[i].getCod(),"a1")==0 )
            cout<<x[i];
    }

    return 0;
}
