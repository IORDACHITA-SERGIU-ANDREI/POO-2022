#include <iostream>
#include <string.h>
#include "Proprietate.h"
using namespace std;

class Imobil:public Proprietate{

    protected:

        double venit_pe_an;
        char *imbunatatiri;

    public:

        Imobil();
        Imobil(char [],double ,double ,char *);
        Imobil(const Imobil &);
        ~Imobil();
        Imobil& operator=(const Imobil &);
        friend ostream & operator<<(ostream&,const Imobil &);
        friend istream & operator>>(istream&,Imobil &);

        double getValoare();
        void afis();
        void schimbare();
};
