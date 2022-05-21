#include <iostream>
#include <string.h>
#include "Angajat.h"
using namespace std;

int main()
{
    int n,i;
    char name[20],CNP[14];
    int salary;
    cout<<"Introduceti numarul de angajati!"<<endl;
    cin>>n;
    Angajat *x;
    x=new Angajat[n];
    for(i=0;i<n;i++)
    {
        cout<<"Angajatul "<<i+1<<":"<<endl;
        cin>>name;
        cin>>CNP;
        cin>>salary;
        Angajat p(name,CNP,salary);
        x[i].modificare(p);
    }

    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(strcmp(x[i].getName(),x[j].getName())>0)
            {
                x[i].schimbare(x[i],x[j]);
            }
        }
    }

    cout<<endl;


    // Afisare

    for(i=0;i<n;i++)
    {
        x[i].afisare();
    }

    cout<<endl;
    cout<<endl;

    // Modificare date ale unui angajat

    char alt_angajat_nume[20],alt_angajat_CNP[14];
    int alt_angajat_salariu;
    cout<<"Introduceti noul angajat!"<<endl;
    cin>>alt_angajat_nume;
    cin>>alt_angajat_CNP;
    cin>>alt_angajat_salariu;
    Angajat nou(alt_angajat_nume,alt_angajat_CNP,alt_angajat_salariu);
    int poz;
    cout<<"Ce angajat vreti sa inlocuiti? (de la 0 la nr maxim de angajati-1) ! "<<endl;
    cin>>poz;

    for(i=0;i<n;i++)
    {
        if(i==poz)
        {
            x[i].modificare(nou);
        }
    }

    cout<<endl;

    // Numar femei si numar barbati


    int nrbarbati=0,nrfemei=0;

    for(i=0;i<n;i++)
    {
        if(x[i].eFemeie()==true)
            nrfemei++;
        else
            nrbarbati++;
    }

    cout<<"Numar femei : "<<nrfemei<<" "<<"Numar barbati : "<<nrbarbati<<endl;

    // Angajatii cu salariu mai mare de 3000

    cout<<"Angajatii cu salariu mai mare de 3000 :"<<endl;

    for(i=0;i<n;i++)
    {
        if(x[i].getSalariu()>3000)
        {
            x[i].afisare();
        }
    }


    return 0;
}
