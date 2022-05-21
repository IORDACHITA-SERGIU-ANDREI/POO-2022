#include <assert.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

template <typename T>
class vector
{ int dim;
  T* buf;
  public:
     vector();
     vector(int , T*);
     vector(const vector&);
     vector & operator=(const vector &);
     ~vector();
	 T& operator[](int i);
     int getDim();

	 friend ostream & operator << (ostream & dev,  vector & v)
     {
	    dev << "Vector:" <<endl;
	    dev << "Nr Elem:" << v.dim << endl;
	    if (v.buf!=NULL)
	    for(int i = 0; i < v.dim; i++) {
		   dev << v.buf[i];//am nevoie de op<< pt T
		   if(i < v.dim-1)
		    	dev << ",   ";
		   else
		    	dev << "." << endl;
		}
        dev<<endl;
	    return dev;
     }

	void addElem(int, T&  ); // - adauga element T pe pozitia i - cu realocare
	void removeElem(int  ); // - sterge elementul de pe pozitia i cu realocare
	void sortare(); // ordoneaza crescator elementele din buf; in T avem nevoie de op<
};

template <typename T>
vector<T>::vector( ){
	dim=0;
	buf=NULL;
}

template <typename T>
vector<T>::vector(int d, T*b){
       dim=d;
       if (b==NULL) buf = NULL;
	   else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
            buf[i]=b[i]; //op= in T
        }
     }


template <typename T>
vector<T>::vector(const vector<T>& v){
       dim=v.dim;
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
             buf[i]=v.buf[i]; //op= in T
        }
	 }


template <typename T>
vector<T>::~vector(){
        if (buf!=NULL) delete [] buf; //destr in T
}

template <typename T>
vector<T>&  vector<T>::operator=(const vector &v){
       dim=v.dim;
       if (buf!=NULL) delete [] buf; //destr in T
       if (v.buf==NULL) buf=NULL;
       else{
	      buf=new T[dim]; //constr fara param in T
          for (int i=0;i<dim;i++)
             buf[i]=v.buf[i]; //op= in T
		}
        return *this;
}

template <typename T>
T& vector<T>::operator[](int i){
      assert ((i>-1 && i<dim));
	  return buf[i];  //constr de copiere in T
}

template <typename T>
int vector<T>::getDim()
{
   return dim;
}

template <typename T>
void vector<T>::sortare()
{
    for(int i=0;i<dim-1;i++)
    {
        for(int j=i;j<dim;j++)
        {
            if(buf[i]>buf[j])
                swap(buf[i],buf[j]);
        }
    }
}

template <typename T>
void vector<T>::addElem(int x,T &b)
{
    T *copie;
    copie=new T[dim];
    int aux=0;
    for(int i=0;i<dim;i++)
    {
        copie[i]=buf[i];
    }
    delete[] buf;
    dim++;
    buf=new T[dim];
    for(int i=0;i<dim;i++)
    {
        if(i==x)
        {
            buf[i]=b;
            aux=1;
            i++;
            if(i==dim)
                break;
        }
        if(aux==1)
        {
            buf[i]=copie[i-1];
        }
        else
        {
            buf[i]=copie[i];
        }
    }
    delete[] copie;
}

template <typename T>
void vector<T>::removeElem(int a)
{
    T *copie;
    copie=new T[dim];
    int aux=0;
    for(int i=0;i<dim;i++)
    {
        copie[i]=buf[i];
    }
    delete[] buf;
    dim--;
    buf=new T[dim];
    for(int i=0;i<dim;i++)
    {
        if(i==a)
        {
            aux=1;
            if(i==dim)
                break;
        }
        if(aux==1)
        {
            buf[i]=copie[i+1];
        }
        else
        {
            buf[i]=copie[i];
        }
    }
    delete[] copie;
}

class complex
{ double re,im;
public: complex(double r=0,double i=0):re(r),im(i){
        }

        friend ostream& operator<<(ostream &d,complex x){

            d<<x.re<<" j"<<x.im;
            return d;
        }

        friend bool operator>(const complex &a,const complex &b)
        {
            if(a.re>b.re)
                return true;
            else if(a.re==b.re && a.im>b.im)
                return true;
            else
                return false;
        }
        //ordonarea se va face in fctie de partea reala
};

template<typename X,typename Y>
class pereche
{
    X elem1;
    Y elem2;

public:

    pereche(){}
    pereche(const X &e1,const Y &e2)
    {
        elem1=e1;
        elem2=e2;
    }
    friend ostream& operator<<(ostream &d,const pereche &x)
    {
        d<<x.elem1<<" = "<<x.elem2<<endl;
        return d;
    }
    friend bool operator>(const pereche &a,const pereche &b)
    {
        if(a.elem1>b.elem1)
            return true;
        else
            return false;
    }
};

class Produs{

    protected:

        char cod[6];
        int pret;

    public:

        Produs()
        {
            cod[0]='\0';
            pret=0;
        }
        Produs(char b[],int a)
        {
            strcpy(cod,b);
            pret=a;
        }
        friend ostream & operator<<(ostream &s1,const Produs &x)
        {
            s1<<"\n Codul produsului este: "<<x.cod<<endl<<"Pretul produsului este: "<<x.pret<<endl;
            return s1;
        }
        friend istream & operator>>(istream &s2,Produs &x)
        {
            char aux[6];
            cout<<"Cod produs :";
            s2>>aux;
            strcpy(x.cod,aux);
            cout<<"Pret :";
            s2>>x.pret;
            return s2;
        }
        friend bool operator>(const Produs &a,const Produs &b)
        {
            if(a.pret>b.pret)
                return true;
            else
                return false;
        }
};

int main()
{
	 complex *b=new complex[2];
	 b[0]=complex(9,9);
     b[1]=complex(7,7);
	 vector<complex> v(2,b);
     cout<<v;

	 cout<<v[0];

	 v[1]=complex(5,5);
     cout<<v;

     vector<complex> v1(v);
     cout<<v1;

     v=v1;
     cout<<v;

     cout<<endl;

     v.sortare();

     cout<<"Vector sortat :\n";
     cout<<v;

     // Clasa vector specializata pentru int

     cout<<"Clasa vector pentru int : \n";
     int *x=new int[3];
     x[0]=9; x[1]=1; x[2]=2;
     vector<int> a(3,x);
     cout<<a;
     int r=8;

     a.addElem(1,r);

     cout<<a;

     a.removeElem(2);

     cout<<a;

     a.sortare();

     cout<<a;

     cout<<endl;

     // Clasa vector specializata pentru string

     cout<<"Clasa vector pentru string : \n";
     string *y=new string[3];
     y[0]="roz";
     y[1]="alb";
     y[2]="negru";
     vector<string> q(3,y);
     cout<<q;
     string e="gri";

     q.addElem(0,e);

     cout<<q;

     q.removeElem(2);

     cout<<q;

     q.sortare();

     cout<<q;

     cout<<endl;

     // Dictionar

     pereche<string,string> p1("copil","child");
     pereche<string,string> p2("birou","desk");
     pereche<string,string> p3("iarna","winter");
     pereche<string,string> *d=new pereche<string,string>[3];
     d[0]=p1;
     d[1]=p2;
     d[2]=p3;

     vector<pereche<string,string>> disc(3,d);
     cout<<disc;

     disc.sortare();

     cout<<disc;

     // Am ales din laboratoarele precedente clasa Produs

     Produs *prod=new Produs[2];
     char aux1[6];
     strcpy(aux1,"ABC");
     char aux2[6];
     strcpy(aux2,"DEF");
     Produs pr1(aux1,190);
     Produs pr2(aux2,170);
	 prod[0]=pr1;
     prod[1]=pr2;
	 vector<Produs> PROD(2,prod);
     cout<<PROD;

     PROD.sortare();

     cout<<PROD;

     return 0;
}


