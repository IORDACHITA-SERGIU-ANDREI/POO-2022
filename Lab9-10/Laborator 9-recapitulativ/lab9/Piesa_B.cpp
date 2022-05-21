#include "Piesa_B.h"

Piesa_B::Piesa_B():Piesa()
{
    culoare="rosu";
}

Piesa_B::Piesa_B(char a[],int b,string c):Piesa(a,b)
{
    culoare=c;
}

void Piesa_B::afisare()
{
    Piesa::afisare();
    cout<<"Culoare : "<<culoare<<endl;
}

int Piesa_B::getPret() const
{
    return pret;
}

void Piesa_B::creareFisier()
{
    ofstream fisier("FisierObiecte.txt",ios::app);

    fisier<<cod<<" "<<pret<<" "<<culoare;

    fisier.close();
}
