#include <iostream>
#include <string.h>
#include "MyString.h"
using namespace std;

MyString::MyString()
{
    buf=NULL;
    l=0;
}

MyString::MyString(char *x)
{
    buf=new char[strlen(x)+1];
    strcpy(buf,x);
    l=strlen(x);
}

MyString::MyString(const MyString &a)
{
    buf=new char[strlen(a.buf)+1];
    strcpy(buf,a.buf);
    l=a.l;
}

MyString &MyString::operator=(const MyString &v)
{
    if(buf!=NULL)
        delete[] buf;
    buf=new char[strlen(v.buf)+1];
    strcpy(buf,v.buf);
    l=v.l;

    return *this;
}

MyString::~MyString()
{
    delete[] buf;
}

void MyString::citire()
{
    char a[50];
    cin>>a;
    if(buf!=NULL)
        delete[] buf;
    buf=new char[strlen(a)+1];
    strcpy(buf,a);
    l=strlen(a);
}

void MyString::afisare() const
{
    if(buf==NULL)
        cout<<"Buf == NULL"<<endl;
    else
        cout<<"Buf: "<<buf<<endl;
    cout<<"Lungime sir:"<<l<<endl;
}




const MyString operator+(const MyString &a,const MyString &b)
{
    MyString x;
    x.buf=new char[strlen(a.buf)+strlen(b.buf)+1];
    strcpy(x.buf,a.buf);
    strcat(x.buf,b.buf);
    x.l=a.l+b.l;

    return x;
}

MyString & MyString::operator+=(const MyString &x)
{
    strcat(buf,x.buf);
    l=l+x.l;

    return *this;
}

bool operator==(const MyString &a,const MyString &b)
{
    if(strcmp(a.buf,b.buf)==0)
        return true;
    else
        return false;
}

bool operator!=(const MyString &a,const MyString &b)
{
    if(strcmp(a.buf,b.buf)!=0)
        return true;
    else
        return false;
}

int MyString::lookFor(char x)
{
    int nr=0;
    for(int i=0;i<strlen(buf);i++)
    {
        if(buf[i]==x)
            nr++;
    }

    return nr;
}




