#ifndef PROPRIETATE
#define PROPRIETATE

#include <iostream>
#include <string.h>
using namespace std;

class Proprietate{

    protected:

        char cod[6];
        double valoare;

    public:

        Proprietate();
        Proprietate(char [],double );
        friend ostream & operator<<(ostream&,const Proprietate &);
        friend istream & operator>>(istream&,Proprietate &);

        virtual double getValoare();
        virtual void afis();
        virtual void schimbare();
};

#endif // PROPRIETATE




