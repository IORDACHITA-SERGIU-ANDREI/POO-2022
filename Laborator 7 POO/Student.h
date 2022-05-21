#ifndef student
#define student

#include "Baza.h"

class Student:virtual public Baza{

    int id_student; //unic pentru fiecare persoana de acest tip
    int n; //nr. note pe baza carora se calculeaza media
    int *note; //vectorul in care se stocheaza cele n note

public:

    Student();
    Student(int ,int ,int *);
    Student(const Student &);
    ~Student();
    Student& operator=(const Student &);
    void afisare();
    int getVenit();

}; //media studentului e suma notelor/n; daca media>8.5 si nu are note<5 atunci are bursa
  // venitul unui student pe luna e bursa (=700) sau 0 daca nu are bursa

#endif // student
