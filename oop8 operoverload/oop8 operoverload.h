#ifndef OOP8OPEROVERLOAD_H
#define OOP8OPEROVERLOAD_H
#include <string>
using namespace std;

class Student {
private:
	string value;
	string name, surname, patronymic;
	int kurs;

public:
	Student() {
		name = "";
		surname = "";
		patronymic = "";
		kurs = 0;
	}

	Student& operator=(const Student& right) {
		if (this == &right) {
			return *this;
		}
		value = right.value;
		name = right.name;
		surname = right.surname;
		patronymic = right.patronymic;
		kurs = right.kurs;
		return *this;
	}

	friend ostream& operator<< (ostream &out, const Student &stud);
	friend istream& operator>> (istream &in, Student &stud);
};

#endif
