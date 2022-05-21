#ifndef piesa_b
#define piesa_b

#include "Piesa.h"

class Piesa_B: public Piesa{

    string culoare;

public:

    Piesa_B();
    Piesa_B(char [],int ,string );
    void afisare();
    int getPret() const;
    void creareFisier();

};

#endif // piesa_b
