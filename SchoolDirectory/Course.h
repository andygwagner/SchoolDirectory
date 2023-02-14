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

	//SET FUNCTIONS
	void setCRN(int);
	void setTitle(String^);
	void setDep(String^);
	void setLecD(String^);
	void setLecS(int);
	void setLecE(int);
	void setLabD(String^);
	void setLabS(int);
	void setLabE(int);
	void setSem(String^);
	void setYear(String^);
	void setCredit(int);

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