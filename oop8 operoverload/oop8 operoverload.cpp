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

/*
void Student::PrintMassive(int i) {
    cout << "Student: " << this->mass[i].surname << ", " << this->mass[i].name << ", " << this->mass[i].patronymic << ", the " << this->mass[i].kurs << " grade." << endl;

}
*/