#include "Classes.h"

Classes::Classes() {
	for (int x = 0; x < 100; x++) {
		className[x] = "";
		classGrade[x] = "";
		classSemester[x] = "";
	}
	GPA = 0.0;
}
void Classes::calculateGPA(string classGrade[], float &GPA) {
	float grade = 0;
	for (int x = 0; x < 100; x++) {
		if (classGrade[x] == "A") {
			grade = grade + 4.0;
		}
		else if (classGrade[x] == "B") {
			grade = grade + 3.0;
		}
		else if (classGrade[x] == "C") {
			grade = grade + 2.0;
		}
		else if (classGrade[x] == "D") {
			grade = grade + 1.0;
		}
		else if (classGrade[x] == "F") {
			grade = grade + 0.0;
		}
		else if (classGrade[x] == "") {
			GPA = grade / x;
			break;
		}
	}
}
void Classes::setClassName(string className_) {
	string anotherClass = "Y";
	int x = 0;
	while ((anotherClass == "Y" || anotherClass == "y") && x != 100) {
		system("cls");
		cout << "You can enter " << 100 - (x+1) << " more classes for this student after this one." << endl;
		cout << "What is the class name? : ";
		getline(cin, className_);
		className[x] = className_;
		setClassGrade(classGrade[x], x); //This also includes the setClassSemester() function and is included here so you dont have to call all the functions
		cout << "Do you want to enter another class? Y/N : ";
		getline(cin, anotherClass);
		x++;
	}
}
void Classes::setClassGrade(string classGrade_,int x) {
	cout << "What is the students grade for " << className[x] << "? ( A , B , C , D or F ) : ";
	while (classGrade_ != "A" && classGrade_ != "B" && classGrade_ != "C" && classGrade_ != "D" && classGrade_ != "F") {
		getline(cin, classGrade_);
		if (classGrade_ != "A" && classGrade_ != "B" && classGrade_ != "C" && classGrade_ != "D" && classGrade_ != "F") {
			cout << "Invalid..." << endl << "Please enter one of the valid letter grades ( A , B , C , D or F ) : ";
		}
	}
	classGrade[x] = classGrade_;
	setClassSemester(classSemester[x],x);//Included here to ultimately group all functions into one
}
void Classes::setClassSemester(string classSemester_,int x) {
	cout << "What semester and year was " << className[x] << " taken? (Example : \"Fall 2021\") : ";
	getline(cin, classSemester_);
	classSemester[x] = classSemester_;
}

string Classes::getClassName(int x) {
	x;
	return className[x];
}
string Classes::getClassGrade(int x) {
	x;
	return classGrade[x];
}
string Classes::getClassSemester(int x) {
	x;
	return classSemester[x];
}
float Classes::getGPA() {
	calculateGPA(classGrade, GPA);
	return GPA;
}