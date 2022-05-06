#ifndef OOP8OPEROVERLOAD_H
#define OOP8OPEROVERLOAD_H
#include <string>
using namespace std;

class Student {

private:
	Student* mass;
	string value;
	string name, surname, patronymic, kurs;

public:
	Student() {
		name = "";
		surname = "";
		patronymic = "";
		kurs = "";
	}

	Student(int N) {
		mass = new Student[N];
	}

	void setValueMass(int ind, Student value) {
		mass[ind] = value;
	}

	Student getValueMass(int ind) { 
		return mass[ind]; 
	}

	//void PrintMassive(int i);

	Student& operator=(const Student& right) {
		if (this == &right) {
			return *this;
		}
		value = right.value;
		return *this;
	}

	friend ostream& operator<< (ostream &out, const Student &stud);
	friend istream& operator>> (istream &in, Student &stud);

	~Student() {
		delete[]mass;
	}
};



#endif
