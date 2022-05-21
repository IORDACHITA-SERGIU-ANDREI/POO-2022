#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int get_nrlinii()
{
    ifstream fisier("date.in");

    int nrlinii=0;
    char cnp[14];

    while ( !fisier.eof() )
    {
        fisier.getline(cnp,14,'\n');
        nrlinii++;
    }

    fisier.close();

    return nrlinii;
}

string *creare_vector(int nrlinii)
{
    string *x;
    x=new string[nrlinii];

    ifstream fisier("date.in");

    char cnp[14];
    int i=0;

    while ( !fisier.eof() )
    {
        fisier.getline(cnp,14,'\n');
        x[i]=cnp;
        i++;
    }

    fisier.close();

    return x;
}

void creare_fisiere_barbati_femei(string *x,int nrlinii)
{
    ofstream fisier1("barbati.out",ios::out);
    ofstream fisier2("femei.out",ios::out);

    for(int i=0;i<nrlinii;i++)
    {
        if(x[i][0]=='1')
            fisier1<<x[i]<<endl;
        else
            fisier2<<x[i]<<endl;
    }

    fisier1.close();
    fisier2.close();
}

void creare_fisier_sortat(string *x,int nrlinii)
{
    ofstream fisier3("date_nastere.out",ios::out);

    string *y;
    y=new string[nrlinii];

    for(int i=0;i<nrlinii;i++)
        y[i]=x[i];

    for(int i=0;i<nrlinii-1;i++)
        for(int j=i;j<nrlinii;j++)
        {
            if(y[i].compare(1,6,y[j],1,6)!=-1)
                y[i].swap(y[j]);
        }

    for(int i=0;i<nrlinii;i++)
    {
        fisier3<<y[i]<<endl;
    }

    fisier3.close();
}

void replaceALL(string& s, const string& secv, const string& cuv)
{
    int loc;
        while ((loc=s.find(secv))!=string::npos)
        {
            s.replace(loc, secv.size(), cuv);
        }
}


void inlocuire(int nrlinii)
{
    ifstream fisier4("date_nastere.out");

    string *z;
    z=new string[nrlinii];

    char cnp[14];
    int i=0;

    for(i=0;i<nrlinii;i++)
    {
        fisier4.getline(cnp,14,'\n');
        z[i]=cnp;
    }

    fisier4.close();

    for(i=0;i<nrlinii;i++)
    {
        replaceALL(z[i],"010","XY");
    }

    ofstream fisier5("date_nastere.out",ios::out);

    for(int i=0;i<nrlinii;i++)
    {
        fisier5<<z[i]<<endl;
    }

    fisier5.close();

}

int getNumarBucuresti(int nrlinii)
{
    ifstream fisier6("date.in");

    char cnp[14];
    int i=0,nrbucuresteni=0;

    for(i=0;i<nrlinii;i++)
    {
        fisier6.getline(cnp,14,'\n');
        if(cnp[7]=='4')
            nrbucuresteni++;
    }

    fisier6.close();

    return nrbucuresteni;
}

int main()
{
    int nr;
    nr=get_nrlinii();
   // cout<<"Numarul de linii este : "<<nr;
    string *rezultat;
    rezultat=creare_vector(nr);

    creare_fisiere_barbati_femei(rezultat,nr);

    creare_fisier_sortat(rezultat,nr);

    inlocuire(nr);

    int nrbuc;
    nrbuc=getNumarBucuresti(nr);
    cout<<"Numarul persoanelor nascute in Bcuresti este : "<<nrbuc<<endl;


    return 0;
}
