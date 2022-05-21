#include <iostream>
using namespace std;

class Garantie{

    private:

        int nr_luni;
        char *service;

    public:

        Garantie();
        Garantie(int ,char *);
        Garantie(const Garantie &);
        ~Garantie();
        Garantie& operator=(const Garantie &);
        friend ostream & operator<<(ostream&,const Garantie &);
        friend istream & operator>>(istream&,Garantie &);
        int getNr_luni();
        char *getService();

};
