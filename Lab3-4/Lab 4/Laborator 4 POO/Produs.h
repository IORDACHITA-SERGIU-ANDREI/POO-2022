#include <iostream>
#include "Garantie.h"
using namespace std;

class Produs{

    private:

        int pret;
        char *marca;
        Garantie g;

    public:

        Produs();
        Produs(int ,char *,Garantie );
        Produs(const Produs &);
        ~Produs();
        Produs& operator=(const Produs &);
        friend ostream & operator<<(ostream&,const Produs &);
        friend istream & operator>>(istream&,Produs &);
        Garantie getGarantie();
        int getPret();
};
