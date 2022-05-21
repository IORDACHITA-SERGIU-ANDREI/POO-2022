#ifndef baza
#define baza

#include <iostream>
#include <string.h>
using namespace std;

class Baza{

public:

    virtual void afisare()=0;
    virtual ~Baza(){}
    virtual int getVenit()=0;

};

#endif // baza
