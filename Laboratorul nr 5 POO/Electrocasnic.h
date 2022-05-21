#include <iostream>
#include <string.h>
#include "Produs.h"
using namespace std;

class Electrocasnic:public Produs{

    protected:

        char *marca;

    public:

        Electrocasnic();
        Electrocasnic(char [],int ,char *);
        Electrocasnic(const Electrocasnic &);
        ~Electrocasnic();
        Electrocasnic& operator=(const Electrocasnic &);
        friend ostream & operator<<(ostream&,const Electrocasnic &);
        friend istream & operator>>(istream&,Electrocasnic &);

};


