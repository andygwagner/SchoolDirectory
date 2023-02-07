//Course.h
#ifndef COURSE_H
#define COURSE_H

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class Course {
public:
	// CONSTRUCTOR
	Course(int, String^, String^, String^, int, int, String^, int, int, String^, String^, int);

	//DESTRUCTOR
	~Course();

private:
	int crn;
	String^ nam;
	String^ dep;
	String^ lecd;
	int lecs;
	int lece;
	String^ labd;
	int labs;
	int labe;
	String^ ss;
	String^ sy;
	int cc;
};

#endif