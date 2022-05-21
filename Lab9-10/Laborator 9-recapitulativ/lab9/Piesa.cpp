#include "Piesa.h"

Piesa::Piesa()
{
    strcpy(cod,"aaa");
    pret=0;
}

Piesa::Piesa(char a[],int b)
{
    strcpy(cod,a);
    pret=b;
}

void Piesa::afisare()
{
    cout<<"Cod : "<<cod<<endl;
    cout<<"Pret : "<<pret<<endl;
}

int Piesa::getPret() const
{
    return pret;
}

void Piesa::creareFisier()
{
    ofstream fisier("FisierObiecte.txt",ios::app);

    fisier<<cod<<" "<<pret;

    fisier.close();
}
