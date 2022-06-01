#include "oop8 operoverload.h"
#include <iostream>
using namespace std;

ostream &operator<< (ostream &out, const Student &stud)
{
    out << stud.surname << " " << stud.name << " " << stud.patronymic << ", the " << stud.kurs << "th grade.";
    return out;
}

istream &operator>> (istream &in, Student &stud) 
{
    in >> stud.surname >> stud.name >> stud.patronymic >> stud.kurs;
    return in;
}