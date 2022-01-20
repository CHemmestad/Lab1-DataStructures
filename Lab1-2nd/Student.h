#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
public:
	Student();

	void setName(string name_);
	string getName();
	void setId(string id_);
	string getId();

private:
	string name;
	string id;
};

#endif