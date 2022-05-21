#include <iostream>
#include <string.h>
#include "Produs.h"
using namespace std;

int cmp(const void *a,const void *b)
{
    Produs x=*(Produs*)a;
    Produs y=*(Produs*)b;

    return x.getPret()-y.getPret();
}

int main()
{
    Garantie a2(2,"ade");
    Garantie b2;
    b2=a2;
    cout<<b2;
    cin>>b2;
    Garantie c2=b2;
    cout<<c2;
    Produs p2(121,"audi",a2);
    Produs q2;
    q2=p2;
    cout<<q2;
    Produs x2;
    cin>>x2;
    cout<<x2;
    Produs r2=x2;
    cout<<r2;

    int n;
    cout<<"Introduceti numarul de produse:";
    cin>>n;
    Produs *a;
    a=new Produs[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    // Sortare in functie de pret

    qsort ((void*) a, n, sizeof(Produs), cmp);

    cout<<"\nProduse sortate in functie de pret : "<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }

    // Afisare produse cu garantie mai mare de 12 luni

    cout<<"\nProduse cu garantie mai mare de 12 luni : "<<endl;

    for(int i=0;i<n;i++)
    {
        if(a[i].getGarantie().getNr_luni()>12)
        {
            cout<<a[i];
        }
    }

    // Afisare produse cu garantia la service-ul "SerVice"

    cout<<"\nProduse cu garantia la service-ul SerVice : "<<endl;

    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].getGarantie().getService(),"SerVice")==0)
        {
            cout<<a[i];
        }
    }


    return 0;
}
