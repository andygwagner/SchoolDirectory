// Instructor.cpp
#include "pch.h"
#include "Instructor.h"

//CONSTRUCTOR
Instructor::Instructor(int ID, String^ fName, String^ lName, String^ password, String^ email, String^ department)
	:User{ ID, fName, lName, password, email }
{
	this->Department = department;
}

String^ Instructor::getDepartment() { return Department; }
void Instructor::setDepartment(String^ Dept) { Department = Dept; }

void Instructor::printCredentials() {
	Console::WriteLine("User Credentials");
	Console::WriteLine("Name: " + getfName() + " " + getlName());
	Console::WriteLine("ID: " + getId());
	Console::WriteLine("Email: " + getEml());
	Console::WriteLine("Department: " + getDepartment());
	Console::WriteLine("Password: " + getPwd());
}

void Instructor::instructMenu(String^ connString) {
	int looper = 0;
	char choice;
	while (looper == 0) {
		Console::WriteLine("-------------Menu-------------");
		Console::WriteLine("s - Course Search");
		Console::WriteLine("r - Course Roster");
		Console::WriteLine("p - Print Schedule");
		Console::WriteLine("c - Print Credentials");
		Console::WriteLine("x - Log-out");
		choice = Convert::ToChar(Console::ReadLine());

		switch (choice) {
		case 's':
			searchCourse(connString);
			break;
		case 'r':
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
Instructor::~Instructor()
{}
