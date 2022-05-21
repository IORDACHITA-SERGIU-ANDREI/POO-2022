#ifndef piesa_a
#define piesa_a

#include "Piesa.h"

class Piesa_A: public Piesa{

    int gauri;

public:

    Piesa_A();
    Piesa_A(char [],int ,int );
    void afisare();
    int getPret() const;
    int getGauri() const;
    void creareFisier();

};

#endif // piesa_a
