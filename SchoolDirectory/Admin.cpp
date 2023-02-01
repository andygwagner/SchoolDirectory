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

void Admin::printCredentials() {
	Console::WriteLine("User Credentials");
	Console::WriteLine("Name: " + getfName() + " " + getlName());
	Console::WriteLine("ID: " + getId());
	Console::WriteLine("Email: " + getEml());
	Console::WriteLine("Office: " + getOffice());
	Console::WriteLine("Password: " + getPwd());
}

//DESTRUCTOR
Admin::~Admin()
{}