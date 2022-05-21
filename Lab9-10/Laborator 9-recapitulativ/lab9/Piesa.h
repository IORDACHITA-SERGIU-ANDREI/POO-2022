#ifndef piesa
#define piesa

#include "Baza.h"

class Piesa:virtual public Baza{

 protected:

    char cod[4];
    int pret;

 public:

    Piesa();
    Piesa(char [],int );
    void afisare();
    int getPret() const;
    void creareFisier();

};

#endif // piesa

