// User.cpp
#include "pch.h"
#include "User.h"

User::User(int ID, String^ fName, String^ lName, String^ pwd, String^ eml)
	:userID{ ID }, firstName{ fName }, lastName{ lName }, password{ pwd }, email{ eml }
{
	/*cout << "Constructor called for User" << endl;*/
}

//GET FUNCTIONS
int User::getId() { return userID; }
String^ User::getfName() { return firstName; }
String^ User::getlName() { return lastName; }
String^ User::getPwd() { return password; }
String^ User::getEml() { return email; }

//SET FUNCTIONS
void User::setfName(String^ fN) { firstName = fN; }
void User::setlName(String^ lN) { lastName = lN; }
void User::setEml(String^ Eml) { email = Eml; }
void User::setPwd(String^ Pwd) { password = Pwd; }

//DESTRUCTOR
User::~User()
{}
