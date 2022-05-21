#include <iostream>
#include <string.h>
#include "MyString.h"
using namespace std;

int main()
{
    // Test citire/afisare

    MyString a;
    a.citire();
    a.afisare();

    // Test constructori

    MyString b("aaa");
    b.afisare();
    MyString c=b;
    c.afisare();

    // Test operatori +,=,+=

    MyString b1;
    b1=a;
    b1.afisare();

    MyString c1;
    c1=b+a;
    c1.afisare();

    MyString d;
    d.citire();
    d+=a;
    d.afisare();

    // Verificare functii bool si lookFor

    cout<<"Verificare functii bool!"<<endl;
    cout<<(b==a)<<endl;
    cout<<(b!=a)<<endl;

    cout<<endl<<"Nr aparitii caractere :"<<endl;
    cout<<d.lookFor('p')<<endl;



    return 0;
}
