#include "TV.h"

TV::TV()
{
    diagonal=0;
    info_suplimentare=new char[50];
    strcpy(info_suplimentare,"Default TV");
}

TV::TV(Electrocasnic c,double d,char *f):Electrocasnic(c)
{
    diagonal=d;
    info_suplimentare=new char[strlen(f)+1];
    strcpy(info_suplimentare,f);
}

TV::TV(const TV &p):Electrocasnic(p)
{
    diagonal=p.diagonal;
    info_suplimentare=new char[strlen(p.info_suplimentare)+1];
    strcpy(info_suplimentare,p.info_suplimentare);
}

TV::~TV()
{
    delete[] info_suplimentare;
}

TV &TV::operator=(const TV &v)
{
    strcpy(cod,v.cod);
    pret=v.pret;
    marca=new char[strlen(v.marca)+1];
    strcpy(marca,v.marca);
    diagonal=v.diagonal;
    info_suplimentare=new char[strlen(v.info_suplimentare)+1];
    strcpy(info_suplimentare,v.info_suplimentare);

    return *this;
}

ostream &operator<<(ostream &s1,const TV &x)
{
    s1<<"\nCodul televizorului este: "<<x.cod<<endl;
    s1<<"\nPretul televizorului este: "<<x.pret<<endl;
    s1<<"\nMarca televizorului este: "<<x.marca<<endl;
    s1<<"\nDiagonala televizorului este: "<<x.diagonal<<endl;
    s1<<"Info_suplim despre televizor: "<<x.info_suplimentare<<endl;
    return s1;
}

istream &operator>>(istream &s2,TV &x)
{
    char aux[50];
    cout<<"Cod : ";
    s2>>x.cod;
    cout<<"Pret : ";
    s2>>x.pret;
    cout<<"Marca :";
    s2>>aux;
    if(x.marca!=NULL)
        delete[] x.marca;
    x.marca=new char[strlen(aux)+1];
    strcpy(x.marca,aux);
    char aux2[50];
    cout<<"Diagonala TV :";
    s2>>x.diagonal;
    cout<<"Info suplimenatare : ";
    s2>>aux2;
    if(x.info_suplimentare!=NULL)
        delete[] x.info_suplimentare;
    x.info_suplimentare=new char[strlen(aux2)+1];
    strcpy(x.info_suplimentare,aux2);
    return s2;
}

double TV::getDiagonala()
{
    return diagonal;
}

void TV::schimbare(TV &a,TV &b)
{
    TV aux;

    strcpy(aux.cod,a.cod);
    aux.pret=a.pret;
    aux.marca=new char[strlen(a.marca)+1];
    strcpy(aux.marca,a.marca);
    aux.diagonal=a.diagonal;
    aux.info_suplimentare=new char[strlen(a.info_suplimentare)+1];
    strcpy(aux.info_suplimentare,a.info_suplimentare);

    strcpy(a.cod,b.cod);
    a.pret=b.pret;
    free(a.marca);
    a.marca=new char[strlen(b.marca)+1];
    strcpy(a.marca,b.marca);
    a.diagonal=b.diagonal;
    free(a.info_suplimentare);
    a.info_suplimentare=new char[strlen(b.info_suplimentare)+1];
    strcpy(a.info_suplimentare,b.info_suplimentare);

    strcpy(b.cod,aux.cod);
    b.pret=aux.pret;
    free(b.marca);
    b.marca=new char[strlen(aux.marca)+1];
    strcpy(b.marca,aux.marca);
    b.diagonal=aux.diagonal;
    free(b.info_suplimentare);
    b.info_suplimentare=new char[strlen(aux.info_suplimentare)+1];
    strcpy(b.info_suplimentare,aux.info_suplimentare);
}

char *TV::getCod()
{
    return cod;
}
int TV::getPret()
{
    return pret;
}
char *TV::getMarca()
{
    return marca;
}



