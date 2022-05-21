#include "Piesa_A.h"

Piesa_A::Piesa_A():Piesa()
{
    gauri=0;
}

Piesa_A::Piesa_A(char a[],int b,int c):Piesa(a,b)
{
    gauri=c;
}

void Piesa_A::afisare()
{
    Piesa::afisare();
    cout<<"Gauri : "<<gauri<<endl;
}

int Piesa_A::getPret() const
{
    return pret;
}

int Piesa_A::getGauri() const
{
    return gauri;
}

void Piesa_A::creareFisier()
{
    ofstream fisier("FisierObiecte.txt",ios::app);

    fisier<<cod<<" "<<pret<<" "<<gauri;

    fisier.close();
}
