#ifndef angajat
#define angajat

#include "Baza.h"

class Angajat:virtual public Baza{

    int id_angajat;  //unic pentru fiecare persoana de acest tip
    int salariu;

public:

    Angajat();
    Angajat(int ,int );
    void afisare();
    int getVenit();

}; // venitul unui angajat pe luna e salariul

#endif // angajat
