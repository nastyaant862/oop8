#include "oop8 operoverload.h"
#include <iostream>
using namespace std;

ostream& operator<< (ostream& out, const Student &stud)
{
    out << "Student: " << stud.surname << ", " << stud.name << ", " << stud.patronymic << ", the " << stud.kurs << " grade.";
    return out;
}

istream& operator>> (istream& in, Student& stud) 
{
    in >> stud.surname;
    in >> stud.name;
    in >> stud.patronymic;
    in >> stud.kurs;
    return in;
}