#ifndef OOP8OPEROVERLOAD_H
#define OOP8OPEROVERLOAD_H
#include <string>
using namespace std;

class Student {

private:
	string value;
	string name, surname, patronymic, kurs;

public:
	Student& operator=(const Student& right) {
		if (this == &right) {
			return *this;
		}
		value = right.value;
		return *this;
	}
	friend ostream& operator<< (ostream &out, const Student &stud);
	friend istream& operator>> (istream &in, Student &stud);
};



#endif
