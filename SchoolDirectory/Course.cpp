#include <iostream>
#include<sstream>
#include<string>
#include "Course.h"
#include "pch.h"

using namespace std;

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

// CONSTRUCTOR
Course::Course(int CRN, String^ courseName, String^ department, String^ lecDays, int lecStart, int lecEnd, String^ labDays, int labStart, int labEnd, String^ semester, int year, int credits)
	: courseCode{ CRN }, nameOfCourse{ courseName }, nameOfDepartment{ department },
	lecDays{ lecDays }, lecStart{ lecStart }, lecEnd{ lecEnd },
	labDays{ labDays }, labStart{ labStart }, labEnd{ labEnd },
	semesterSeason{ semester }, semesterYear{ year }, courseCredits{ credits }
{}

//DESTRUCTOR
Course::~Course() {}