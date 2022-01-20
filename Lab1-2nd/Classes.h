#ifndef CLASSES_H
#define CLASSES_H

#include <iostream>
#include <string>

using namespace std;

class Classes {
public:
	Classes();

	void setClassName(string className_);
	string getClassName(int x);
	void setClassGrade(string classGrade_, int x);
	string getClassGrade(int x);
	void setClassSemester(string classSemester_, int x);
	string getClassSemester(int x);
	void calculateGPA(string classGrade[], float& GPA);
	float getGPA();

private:
	string className[100];
	string classGrade[100];
	string classSemester[100];
	float GPA;
};

#endif