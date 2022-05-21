#ifndef modul_hardware
#define modul_hardware

#include "Baza.h"

class modul_hardware //MH
{

protected:

    vector<Piesa> vec;        //vector piese
    int nr_piese;             //nr piese din vec
    int pm;                   //pret manopera pe ora
    int nr_ore;               //ore dezvoltare

public:

    modul_hardware();
    modul_hardware(vector<Piesa> ,int ,int ,int );
    void afisare();

};// pret=suma preturilor pieselor+pm*nr_ore

#endif // modul_hardware
