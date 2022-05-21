#include "Ansamblu.h"

void sortare(Baza **x,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(x[i]->getPret()>x[j]->getPret())
                swap(x[i],x[j]);
        }
    }
}

int main()
{
    // Creare vector cu obiecte

    Baza **x=new Baza*[3];

    x[0]=new Piesa_A("PsA",100,5);
    x[1]=new Piesa_B("PsB",550,"rosu");

    Piesa_A a("Ps1",150,2);
    Piesa_B *b=new Piesa_B[2];
    Piesa_B s1("Ps2",170,"alb");
    Piesa_B s2("Ps3",180,"roz");
    b[0]=s1;
    b[1]=s2;

    string *q=new string[3];
    q[0]="lung,";
    q[1]="gros,";
    q[2]="greu";
    x[2]=new Ansamblu(a,b,3,q);

    // Afisare vector

  /*  for (int i=0;i<3;i++)
    {
        x[i]->afisare();
        cout<<endl;
    } */

    cout<<endl;

    sortare(x,3);

    // Afisare vector dupa sortare

    for (int i=0;i<3;i++)
    {
        x[i]->afisare();
        cout<<endl;
    }

    // Creare fisier

    ofstream fisier("FisierObiecte.txt",ios::app);

    for(int i=0;i<3;i++)
    {
        x[i]->creareFisier();
        fisier<<endl;
    }

    fisier.close();

    return 0;
}
