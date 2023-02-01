#ifndef USER_H
#define USER_H

#include <iostream>
#include <sstream>
#include <string>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class User {
public:
	//CONSTRUCTOR
	User(int, String^, String^, String^, String^);

	int getId();
	String^ getfName();
	String^ getlName();
	String^ getPwd();
	String^ getEml();

	//DESTRUCTOR
	~User();

private:
	int userID;
	String^ firstName;
	String^ lastName;
	String^ password;
	String^ email;
};

#endif
