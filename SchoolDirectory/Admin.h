// Admin.h
#ifndef ADMIN_H
#define ADMIN_H

#include <iostream>
#include <sstream>
#include <string>

#include "User.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Admin : public User
{
public:
	//CONSTRUCTOR
	Admin(int, String^, String^, String^, String^, String^);

	void printCredentials();

	String^ getOffice();
	void setOffice(String^);

	//DESTRUCTOR
	~Admin();

private:
	String^ adOffice;
};
#endif
