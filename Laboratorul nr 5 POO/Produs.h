#include <iostream>
#include <string.h>
using namespace std;

class Produs{

    protected:

        char cod[6];
        int pret;

    public:

        Produs();
        Produs(char [],int );
        friend ostream & operator<<(ostream&,const Produs &);
        friend istream & operator>>(istream&,Produs &);


};


