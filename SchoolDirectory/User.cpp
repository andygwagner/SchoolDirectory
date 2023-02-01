// User.cpp
#include "pch.h"
#include "User.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

User::User(int ID, String^ fName, String^ lName, String^ pwd, String^ eml)
	:userID{ ID }, firstName{ fName }, lastName{ lName }, password{pwd}, email{eml}
{
	/*cout << "Constructor called for User" << endl;*/
}

int User::getId() { return userID; }
String^ User::getfName() { return firstName; }
String^ User::getlName() { return lastName; }
String^ User::getPwd() { return password; }
String^ User::getEml() { return email; }

//DESTRUCTOR
User::~User()
{}