#include <iostream>
using namespace std;

class MyString{

    private:

        char *buf;
        int l;

    public:

        MyString();
        MyString(char *);
        MyString(const MyString &);
        MyString& operator=(const MyString &);
        ~MyString();
        void citire();
        void afisare() const;

        friend const MyString operator+(const MyString&,const MyString&);
        MyString& operator+=(const MyString&);
        friend bool operator==(const MyString&,const MyString&);
        friend bool operator!=(const MyString&,const MyString&);
        int lookFor(char);



};
