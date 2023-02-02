// Instructor.cpp
#include "pch.h"
#include "Instructor.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

//CONSTRUCTOR
Instructor::Instructor(int ID, String^ fName, String^ lName, String^ password, String^ email, String^ department)
	:User{ ID, fName, lName, password, email }
{
	this->Department = department;
}

String^ Instructor::getDepartment() { return Department; }

void Instructor::printCredentials() {
	Console::WriteLine("User Credentials");
	Console::WriteLine("Name: " + getfName() + " " + getlName());
	Console::WriteLine("ID: " + getId());
	Console::WriteLine("Email: " + getEml());
	Console::WriteLine("Office: " + getDepartment());
	Console::WriteLine("Password: " + getPwd());
}

//DESTRUCTOR
Instructor::~Instructor()
{}