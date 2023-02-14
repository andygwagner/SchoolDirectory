// Student.h
#ifndef STUDENT_H
#define STUDENT_H

#include "User.h"

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
