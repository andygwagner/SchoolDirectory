// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <sstream>
#include <string>

#include "User.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Student : public User
{
public:
	//CONSTRUCTOR
	Student(int, String^, String^, String^, String^, String^);

	void printCredentials();

	String^ getGPA();
	void setGPA(String^);

	//DESTRUCTOR
	~Student();

private:
	String^ GPA;
};
#endif
