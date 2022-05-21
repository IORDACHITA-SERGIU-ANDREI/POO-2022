#ifndef ansamblu
#define ansamblu

#include "Piesa_A.h"
#include "Piesa_B.h"
#include "Baza.h"

class Ansamblu:virtual public Baza{

    Piesa_A pa;
    Piesa_B *vec; // are ca nr. de elemente nr. de gauri ale lui pa
    int nr_caracteristici;
    string *caracteristici; //lungimea vectorului e nr_caracteristici

public:

    Ansamblu();
    Ansamblu(Piesa_A ,Piesa_B *,int ,string *);
    Ansamblu(const Ansamblu &);
    ~Ansamblu();
    Ansamblu& operator=(const Ansamblu &);
    void afisare();
    int getPret() const;
    void creareFisier();

};

// pretul este dat de suma preturilor pieselor componente

#endif // ansamblu
