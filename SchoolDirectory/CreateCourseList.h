#ifndef CREATECOURSELIST_H
#define CREATECOURSELIST_H

#include "Course.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class CourseList {
	CourseList();
	~CourseList();

	void createCourseList(String^);
};
#endif