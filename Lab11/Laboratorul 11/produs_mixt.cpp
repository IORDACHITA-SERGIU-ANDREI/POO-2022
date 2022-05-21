#include "produs_mixt.h"

produs_mixt::produs_mixt():ps()
{
    functionalitati=NULL;
    nr_functionalitati=0;
}

produs_mixt::produs_mixt(produs_software x1,vector<string> x2,int x3)
{
    ps=x1;
    for(int i=0;i<x3;i++)
        functionalitati[i]=x2[i];
    nr_functionalitati=x3;
}

void produs_mixt::afisare()
{
    cout<<"Afisare produs_software : "<<endl;
    ps.afisare();
    cout<<"Functionalitati: "<<endl;
    for(int i=0;i<nr_functionalitati;i++)
    {
        cout<<functionalitati[i]<<",";
    }
    cout<<endl;
    cout<<"Nr_functionalitati : "<<nr_functionalitati<<endl;
}
