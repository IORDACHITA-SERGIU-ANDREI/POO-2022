#include "Student_Angajat.h"

void sortare(Baza **x,int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(x[i]->getVenit()>x[j]->getVenit())
                swap(x[i],x[j]);
        }
    }
}

int main()
{
     Baza **x=new Baza*[3];

     int a,b;
     cout<<"Persoana 1 este doar angajat, introduceti date: "<<endl;
     cout<<"Id_angajat : ";
     cin>>a;
     cout<<"Salariu angajat : ";
     cin>>b;
     x[0]=new Angajat(a,b);
     cout<<endl;


     int c,d,*vec1;
     cout<<"Persoana 2 este doar student, introduceti date: "<<endl;
     cout<<"Id_student : ";
     cin>>c;
     cout<<"Numar note student : ";
     cin>>d;
     vec1=new int[d];
     cout<<"Notele studentului : ";
     for(int i=0;i<d;i++)
     {
         cin>>vec1[i];
     }
     x[1]=new Student(c,d,vec1);
     cout<<endl;


     int q,w,m,n,*vec2;
     cout<<"Persoana 3 este student_angajat, introduceti date: "<<endl;
     cout<<"Id-ul de angajat : ";
     cin>>q;
     cout<<"Salariu de angajat : ";
     cin>>w;
     cout<<"Id-ul de student : ";
     cin>>m;
     cout<<"Numar note ale studentului : ";
     cin>>n;
     vec2=new int[n];
     cout<<"Notele studentului : ";
     for(int i=0;i<n;i++)
     {
         cin>>vec2[i];
     }
     x[2]=new Student_Angajat(q,w,m,n,vec2);
     cout<<endl;

     // Afisare vector

     for (int i=0;i<3;i++)
        x[i]->afisare();

    cout<<endl;


    sortare(x,3);

    // Afisare vector sortat crescator dupa venitul pe luna

    for (int i=0;i<3;i++)
        x[i]->afisare();


    return 0;
}
