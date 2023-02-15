#include "pch.h"
#include "CreateCourseList.h"
#include "Course.h"


CourseList::CourseList(){}
CourseList::~CourseList(){}

void CourseList::createCourseList(String^ connString) {
	int i = 0;

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

	/*System::Collections::Hashtable^ courseList = gcnew System::Collections::Hashtable();*/
	Course temp(CRN[0], Title[0], Department[0], lectureDays[0], lecStart[0], lecEnd[0], labDays[0], labStart[0], labEnd[0], Semester[0], Year[0], Credit[0]);
	temp.printCourseInformation();

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