//Course.h
#include <string>
#ifndef COURSE_H
#define COURSE_H

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class Course {
public:
	// CONSTRUCTOR
	Course(int, String^, String^, String^, int, int, String^, int, int, String^, int, int);

	//DESTRUCTOR
	~Course();

private:
	int courseCode;
	String^ nameOfCourse;
	String^ nameOfDepartment;
	String^ lecDays;
	int lecStart;
	int lecEnd;
	String^ labDays;
	int labStart;
	int labEnd;
	String^ semesterSeason;
	int semesterYear;
	int courseCredits;
};

#endif