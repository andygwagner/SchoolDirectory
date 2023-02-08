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
	Course(Int32, String^, String^, String^, Int32, Int32, String^, Int32, Int32, String^, String^, Int32);

	//DESTRUCTOR
	~Course();

private:
	Int32 crn;
	String^ nam;
	String^ dep;
	String^ lecd;
	Int32 lecs;
	Int32 lece;
	String^ labd;
	Int32 labs;
	Int32 labe;
	String^ ss;
	String^ sy;
	Int32 cc;
};

#endif