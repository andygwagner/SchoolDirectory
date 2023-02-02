// Instructor.h
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include <iostream>
#include <sstream>
#include <string>

#include "User.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Instructor : public User
{
public:
	//CONSTRUCTOR
	Instructor(int, String^, String^, String^, String^, String^);

	void printCredentials();

	String^ getDepartment();
	void setDepartment(String^);

	//DESTRUCTOR
	~Instructor();

private:
	String^ Department;
};
#endif
