#include <iostream>
using namespace std;

#ifndef aaaa
#define aaaa

class Angajat{

    char *nume;
    char CNP[14];
    int salariu;

    public:

        Angajat();
        Angajat(char *,char[],int);
        Angajat(const Angajat&);
        ~Angajat();
        void afisare() const;
        void modificare(const Angajat&);
        int getSalariu() const;
        bool eFemeie() const;

        char* getName();
        void schimbare(Angajat&,Angajat&);

};

#endif
