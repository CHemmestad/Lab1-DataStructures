#include "Student.h"
#include "Classes.h"

Student::Student() {
	name = "";
	id = "";
}

void Student::setName(string name_) {
	cout << "What is the students name? : ";
	getline(cin, name_);
	name = name_;
	setId(id); //included here so you only have to call the setName() function and not both
}
void Student::setId(string id_) {
	cout << "What is the students ID? : ";
	getline(cin, id_);
	id = id_;
}

string Student::getName() {
	return name;
}
string Student::getId() {
	return id;
}