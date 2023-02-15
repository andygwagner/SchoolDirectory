#ifndef CREATECOURSELIST_H
#define CREATECOURSELIST_H

#include "Course.h"

using namespace System;
using namespace System::Data;
//using namespace System::Collections;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class CourseList {
public:
	CourseList();
	~CourseList();
	void createCourseList(String^);
	void printCourseList();
private:
	int CNum = 10;

	array<Int32>^ CRN = gcnew array<Int32>(CNum);
	array<String^>^ Title = gcnew array<String^>(CNum);
	array<String^>^ Department = gcnew array<String^>(CNum);

	array<String^>^ lectureDays = gcnew array<String^>(CNum);
	array<Int32>^ lecStart = gcnew array<Int32>(CNum);
	array<Int32>^ lecEnd = gcnew array<Int32>(CNum);

	array<String^>^ labDays = gcnew array<String^>(CNum);
	array<Int32>^ labStart = gcnew array<Int32>(CNum);
	array<Int32>^ labEnd = gcnew array<Int32>(CNum);

	array<String^>^ Semester = gcnew array<String^>(CNum);
	array<String^>^ Year = gcnew array<String^>(CNum);
	array<Int32>^ Credit = gcnew array<Int32>(CNum);
};
#endif