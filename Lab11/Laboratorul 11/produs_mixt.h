#ifndef produs_mixt
#define produs_mixt

#include "Baza.h"
#include "produs_software.h"
#include "modul_hardware.h"

class produs_mixt: public modul_ hardware  //PM
{
    produs_software ps ;
    vector<string> functionalitati;
    int nr_functionalitati;

    public:

        produs_mixt();
        produs_mixt(int );
        void afisare();

};    //pret = pret ps+pret MH

#endif // produs_mixt
