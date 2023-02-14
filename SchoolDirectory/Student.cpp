// Student.cpp
#include "pch.h"
#include "Student.h"

//CONSTRUCTOR
Student::Student(int ID, String^ fName, String^ lName, String^ password, String^ email, String^ gpa)
	:User{ ID, fName, lName, password, email }
{
	this->GPA = gpa;
}

String^ Student::getGPA() { return GPA; }
void Student::setGPA(String^ gpa) { GPA = gpa; }

void Student::printCredentials() {
	Console::WriteLine("User Credentials");
	Console::WriteLine("Name: " + getfName() + " " + getlName());
	Console::WriteLine("ID: " + getId());
	Console::WriteLine("Email: " + getEml());
	Console::WriteLine("GPA: " + getGPA());
	Console::WriteLine("Password: " + getPwd());
}

//DESTRUCTOR
Student::~Student()
{}
