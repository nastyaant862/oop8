#include "oop8 operoverload.h"
#include <iostream>

int main()
{
    int n;
    Student NewStudent;

    cout << "Enter number of students: ";
    cin >> n;
    Student *array = new Student[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i+1 << " student's surname, name, patronymic and grade: " << endl;
        cin >> NewStudent;
        array[i] = NewStudent;
    }

    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }
    delete[]array;
}