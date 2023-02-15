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

void Student::studentMenu(String^ connString) {
	int looper = 0;
	char choice;
	while (looper == 0) {
		Console::WriteLine("-------------Menu-------------");
		Console::WriteLine("s - Course Search");
		Console::WriteLine("a - Add/Remove Courses (schedule)");
		Console::WriteLine("p - Print Schedule");
		Console::WriteLine("c - Print Credentials");
		Console::WriteLine("x - Log-out");
		choice = Convert::ToChar(Console::ReadLine());
		switch (choice) {
		case 's':
			break;
		case 'a':
			break;
		case 'p':
			break;
		case 'c':
			printCredentials();
			break;
		case 'x':
			Console::WriteLine("Logging out...");
			looper = 1;
		}
	}
}

//DESTRUCTOR
Student::~Student()
{}
