#include "oop8 operoverload.h"
#include <iostream>

int main()
{
    Student NewStudent;

    cout << "Enter student's surname, name, patronymic and grade: " << endl;
    cin >> NewStudent;

    cout << NewStudent;
}