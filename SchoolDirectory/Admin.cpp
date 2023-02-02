// Admin.cpp
#include "pch.h"
#include "Admin.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

//CONSTRUCTOR
Admin::Admin(int ID, String^ fName, String^ lName, String^ password, String^ email, String^ office)
	:User{ ID, fName, lName, password, email }
{
	this->adOffice = office;
}

String^ Admin::getOffice() { return adOffice; }
void Admin::setOffice(String^ Off) { adOffice = Off; }

void Admin::printCredentials() {
	Console::WriteLine("User Credentials");
	Console::WriteLine("Name: " + getfName() + " " + getlName());
	Console::WriteLine("ID: " + getId());
	Console::WriteLine("Email: " + getEml());
	Console::WriteLine("Office: " + getOffice());
	Console::WriteLine("Password: " + getPwd());
}

void Admin::adminMenu() {
	int looper = 0;
	char choice;
	while (looper == 0) {
		Console::WriteLine("------Menu------");
		Console::WriteLine("s - Course Search");
		Console::WriteLine("a - Add/Remove Courses (system)");
		Console::WriteLine("u - Add/Remove User");
		Console::WriteLine("l - Link/Unlink User to Course");
		Console::WriteLine("p - Print User List");
		Console::WriteLine("x - Log-out");
		choice = Convert::ToChar(Console::ReadLine());
		switch (choice) {
		case 's':
			break;
		case 'a':
			break;
		case 'u':
			break;
		case 'l':
			break;
		case 'p':
			break;
		case 'x':
			Console::WriteLine("Logging out...");
			looper = 1;
		}
	}
}

//DESTRUCTOR
Admin::~Admin()
{}