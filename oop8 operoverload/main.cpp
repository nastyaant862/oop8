#include "oop8 operoverload.h"
#include <iostream>

int main()
{
    int n;
    Student NewStudent;
    cout << "Enter number of students: ";
    cin >> n;
    Student array(n);

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << " student's surname, name, patronymic and grade: " << endl;
        cin >> NewStudent;
        //cout << NewStudent << endl;
        array.setValueMass(i, NewStudent);
        
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        NewStudent = array.getValueMass(i);
        cout << NewStudent << endl;
        //array.PrintMassive(i);
    }

}