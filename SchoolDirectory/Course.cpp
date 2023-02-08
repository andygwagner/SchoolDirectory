//Course.cpp
#include "pch.h"
#include "Course.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

// CONSTRUCTOR
Course::Course(Int32 CRN, String^ courseName, String^ department, String^ lecDays, Int32 lecStart, Int32 lecEnd, String^ labDays, Int32 labStart, Int32 labEnd, String^ semester, String^ year, Int32 credits)
	: crn{ CRN }, nam{ courseName }, dep{ department },
		lecd{ lecDays }, lecs{ lecStart }, lece{ lecEnd },
		labd{ labDays }, labs{ labStart }, labe{ labEnd },
		ss{ semester }, sy{ year }, cc{ credits }
	{}

//DESTRUCTOR
Course::~Course() {}