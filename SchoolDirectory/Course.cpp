//Course.cpp
#include "pch.h"
#include "Course.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

// CONSTRUCTOR
Course::Course(int CRN, String^ courseName, String^ department, String^ lecDays, int lecStart, int lecEnd, String^ labDays, int labStart, int labEnd, String^ semester, String^ year, int credits) 
	: crn{ CRN }, nam{ courseName }, dep{ department },
		lecd{ lecDays }, lecs{ lecStart }, lece{ lecEnd },
		labd{ labDays }, labs{ labStart }, labe{ labEnd },
		ss{ semester }, sy{ year }, cc{ credits }
	{}

//DESTRUCTOR
Course::~Course() {}