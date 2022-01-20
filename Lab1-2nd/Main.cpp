/*
Caleb Hemmestad
Data Structures
Due : Jan 24 2022

Discription :
Create a student class that will store important information about a student. As a part of
this lab, a client file needs to be created to test the class by displaying to the screen all
the attributes and display all classes that match a user requested grade.
*/
#include <iostream>
#include <string>
#include <stdio.h>

#include "Student.h"
#include "Classes.h"

using namespace std;

//Precondition : The program doesnt stop in certain spots
//Postcondition : The program stops in certain spots for a second
void pause();

//Precondition : Need the information to be displayed on the screen
//Postcondition : Gets the information and shows the user
void printStudentInfo(Student STUDENT);

//Precondition : Need the information to be displayed on the screen
//Postcondition : Gets the information and shows the user
void printClassInfo(Classes CLASSES);

//Precondition : Need the GPA to shown
//Postcondition : Shows the students GPA at the bottom
void printGPA(Classes CLASSES);

//Precondition : Need to find the requested grade for the user
//Postcondition : Finds all the classes with the requested grade and shows the user
void findClassGrade(Classes CLASSES);

/*
	***********************************************************************************
								  Beginning of main
	***********************************************************************************
*/

int main() {
	
	//Declaring Classes
	Student STUDENT;
	Classes CLASSES;

	//Variable for putting information into the classes
	string RAM;

	//Setting the information in the classes
	STUDENT.setName(RAM);
	CLASSES.setClassName(RAM);

	//Printing the information that was inputted into the classes
	printStudentInfo(STUDENT);
	printClassInfo(CLASSES);
	printGPA(CLASSES);
	findClassGrade(CLASSES);

	return 0;
}

/*
	***********************************************************************************
									 End of main
	***********************************************************************************
*/

//Defining functions used in main

//Used for pausing because I like to
void pause() { 
	for (int x = 0; x < 500000000; x++) {

	}
}
//Used for going through the array within the class and finding the grades that matched the users search
void findClassGrade(Classes CLASSES) { 
	system("pause");

	string again = "Y";

	while (again == "Y"||again == "y") {
		system("cls");
		string gradeSearch = "";
		int count = 0;
		cout << "What grade do you want to search for? ( A , B , C , D or F ) : ";
		while (gradeSearch != "A" && gradeSearch != "B" && gradeSearch != "C" && gradeSearch != "D" && gradeSearch != "F") {
			cin >> gradeSearch;
			if (gradeSearch != "A" && gradeSearch != "B" && gradeSearch != "C" && gradeSearch != "D" && gradeSearch != "F") {
				cout << "Invalid..." << endl << "Please enter one of the valid letter grades ( A , B , C , D or F ) : ";
			}
		}
		cout << "All the classes this student got a/an " << gradeSearch << " in are :" << endl;
		for (int x = 0; x < 100; x++) {
			if (CLASSES.getClassGrade(x) == gradeSearch) {
				cout << "  -- " << CLASSES.getClassName(x) << endl;
				count++;
			}
			else if (CLASSES.getClassGrade(x) == "") {
				if (count == 0) {
					cout << "  -- " << "**None**" << endl;
				}
				break;
			}
		}
		cout << "Do you want to search another grade? Y/N : ";
		cin >> again;
	}
}
//Used for displaying the students information entered whithin the class
void printStudentInfo(Student STUDENT) {
	system("cls");
	pause();
	cout << "Student Name\t - " << STUDENT.getName() << endl;
	cout << "Student ID\t - " << STUDENT.getId() << endl;
}
//Used for displaying all the classes that were entered into the array within the class
void printClassInfo(Classes CLASSES) {
	pause();
	cout << "\nClasses Taken : " << endl;
	for (int x = 0; x < 100; x++) {
		if (CLASSES.getClassName(x) != "" || CLASSES.getClassGrade(x) != "" || CLASSES.getClassSemester(x) != "") {
			cout << "\t" << CLASSES.getClassName(x) << endl;
			cout << "\t  ^--> Grade: " << CLASSES.getClassGrade(x);
			cout << "  -- Semester: " << CLASSES.getClassSemester(x) << endl;
		}
		else
			break;
	}
}
//Used for displaying the students GPA calculated within the class
void printGPA(Classes CLASSES) {
	cout << "\nThis students GPA is : " << CLASSES.getGPA() << endl;
}
