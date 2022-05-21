#include <iostream>
#include <string.h>
#include "Electrocasnic.h"
using namespace std;

class TV:public Electrocasnic{

   private:

        double diagonal;
        char *info_suplimentare;

   public:

        TV();
        TV(Electrocasnic ,double ,char *);
        TV(const TV &);
        ~TV();
        TV& operator=(const TV &);
        friend ostream & operator<<(ostream&,const TV &);
        friend istream & operator>>(istream&,TV &);
        double getDiagonala();
        void schimbare(TV &,TV &);

        char *getCod();
        int getPret();
        char *getMarca();

};



