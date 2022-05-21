#ifndef piesa
#define piesa

#include "Baza.h"

class Piesa
{
    char cod[6];
    int pret ;

public:

    Piesa();
    Piesa(char [],int );
    void afisare();

};

#endif // piesa
