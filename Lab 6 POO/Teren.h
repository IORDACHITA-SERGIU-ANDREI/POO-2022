#include <iostream>
#include <string.h>
#include "Proprietate.h"
using namespace std;

class Teren:public Proprietate{

    protected:

        double venit_pe_luna_m2;
        double suprafata;

    public:

        Teren();
        Teren(char [],double ,double ,double );
        friend ostream & operator<<(ostream&,const Teren &);
        friend istream & operator>>(istream&,Teren &);

        double getValoare();
        void afis();
        void schimbare();
};
