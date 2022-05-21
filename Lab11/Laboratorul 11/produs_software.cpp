#include "produs_software.h"

produs_software::produs_software()
{
    pret=0;
}

produs_software::produs_software(int b)
{
    pret=b;
}

void produs_software::afisare()
{
    cout<<"Pret : "<<pret<<endl;
}


