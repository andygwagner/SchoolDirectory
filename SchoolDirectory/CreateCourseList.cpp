#include "pch.h"
#include "CreateCourseList.h"
#include "Course.h"
#include <cliext/list>

CourseList::CourseList(){}
CourseList::~CourseList(){}

void CourseList::createCourseList(String^ connString) {
	int i = 0;
	const int CNum = 10;
	/*Course temp(0,"","","",0,0,"",0,0,"","",0); 
	cliext::list<Course> classlist;*/
	//array<Course^>^ classList = gcnew array<Course^>(CNum);

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

	try {
		SqlConnection sqlConn(connString);
		sqlConn.Open();

		String^ sqlQuery = "SELECT * FROM course;";
		SqlCommand commandA(sqlQuery, % sqlConn);
		SqlDataReader^ reader = commandA.ExecuteReader();
		while (reader->Read()) {
			CRN[i] = reader->GetInt32(0);
			Title[i] = reader->GetString(1);
			Department[i] = reader->GetString(2);
			lectureDays[i] = reader->GetString(3);
			lecStart[i] = reader->GetInt32(4);
			lecEnd[i] = reader->GetInt32(5);
			labDays[i] = reader->GetString(6);
			labStart[i] = reader->GetInt32(7);
			labEnd[i] = reader->GetInt32(8);
			Semester[i] = reader->GetString(9);
			Year[i] = reader->GetString(10);
			Credit[i] = reader->GetInt32(11);

			i++;
		}
		reader->Close();
		sqlConn.Close();
	}
	catch (SqlException^ e) {
		Console::WriteLine("Failed to connect to database");
	}

	//for (int i = 0; i < CNum; i++) {
	//	temp.setCRN(CRN[i]);
	//	temp.setTitle(Title[i]);
	//	temp.setDep(Department[i]);
	//	temp.setLecD(lectureDays[i]);
	//	temp.setLecS(lecStart[i]);
	//	temp.setLecE(lecEnd[i]);
	//	temp.setLabD(labDays[i]);
	//	temp.setLabS(labStart[i]);
	//	temp.setLabE(labEnd[i]);
	//	temp.setSem(Semester[i]);
	//	temp.setYear(Year[i]);
	//	temp.setCredit(Credit[i]);
	//}

	//for (int i = 0; i < CNum; i++) {
	//	Console::WriteLine(CRN[i] + " " + Title[i]);
	//	Console::WriteLine(Department[i] + " " + Semester[i] + " " + Year[i] + " Credit: " + Credit[i]);
	//	Console::WriteLine("Lecture: " + lectureDays[i] + " " + lecStart[i] + "-" + lecEnd[i]);
	//	Console::WriteLine("Lab: " + labDays[i] + " " + labStart[i] + "-" + labEnd[i]);
	//	Console::WriteLine("--------------------------------------------------");
	//}

}

void CourseList::printCourseList() {

}