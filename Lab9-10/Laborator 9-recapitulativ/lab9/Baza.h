#ifndef baza
#define baza

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

class Baza{

public:

    virtual void afisare()=0;
    virtual int getPret() const=0;
    virtual void creareFisier()=0;
    virtual ~Baza(){}

};

#endif // baza
