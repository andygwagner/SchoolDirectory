// Instructor.h
#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "User.h"

ref class Instructor : public User
{
public:
	//CONSTRUCTOR
	Instructor(int, String^, String^, String^, String^, String^);

	void printCredentials();
	void instructMenu(String^);

	String^ getDepartment();
	void setDepartment(String^);

	//DESTRUCTOR
	~Instructor();

private:
	String^ Department;
};

#endif
