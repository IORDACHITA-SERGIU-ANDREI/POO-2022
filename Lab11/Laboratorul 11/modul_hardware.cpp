#include "modul_hardware.h"

modul_hardware::modul_hardware()
{
    nr_piese=0;
    pm=0;
    nr_ore=0;
}

modul_hardware::modul_hardware(vector<Piesa> x,int a,int b,int c)
{
    vec=x;
    nr_piese=a;
    pm=b;
    nr_ore=c;
}

void modul_hardware::afisare()
{
    cout<<"Vec: "<<endl;
    for(int i=0;i<nr_piese;i++)
    {
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    cout<<"Nr_piese : "<<nr_piese<<endl;
    cout<<"pm : "<<pm<<endl;
    cout<<"Nr_ore : "<<nr_ore<<endl;
}
