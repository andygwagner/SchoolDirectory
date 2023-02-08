#include "CreateCourseList.h"
#include <msclr/marshal_cppstd.h> 
#include<iostream>
#include<string>
#include "pch.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

using namespace std;

void createCourseList(String^ connString) {
	///*int i = 0;
	//const int CNum = 10;*/

	//array<Int32>^ CRN = gcnew array<Int32>(CNum);
	//array<String^>^ Title = gcnew array<String^>(CNum);
	//array<String^>^ Department = gcnew array<String^>(CNum);

	//array<String^>^ lectureDays = gcnew array<String^>(CNum);
	//array<Int32>^ lecStart = gcnew array<Int32>(CNum);
	//array<Int32>^ lecEnd = gcnew array<Int32>(CNum);

	//array<String^>^ labDays = gcnew array<String^>(CNum);
	//array<Int32>^ labStart = gcnew array<Int32>(CNum);
	//array<Int32>^ labEnd = gcnew array<Int32>(CNum);

	//array<String^>^ Semester = gcnew array<String^>(CNum);
	//array<String^>^ Year = gcnew array<String^>(CNum);
	//array<Int32>^ Credit = gcnew array<Int32>(CNum);

	//int CRN[CNum];
	//string Title[CNum];

	//try {
	//	SqlConnection sqlConn(connString);
	//	sqlConn.Open();

	//	String^ sqlQuery = "SELECT * FROM course;";
	//	SqlCommand commandA(sqlQuery, % sqlConn);
	//	SqlDataReader^ reader = commandA.ExecuteReader();
	//	while (reader->Read()) {
	//		CRN[i] = reader->GetInt32(0);
	//		Title[i] = msclr::interop::marshal_as<std::string>(reader->GetString(1));
	//		Department[i] = reader->GetString(2);
	//		lectureDays[i] = reader->GetString(3);
	//		lecStart[i] = reader->GetInt32(4);
	//		lecEnd[i] = reader->GetInt32(5);
	//		labDays[i] = reader->GetString(6);
	//		labStart[i] = reader->GetInt32(7);
	//		labEnd[i] = reader->GetInt32(8);
	//		Semester[i] = reader->GetString(9);
	//		Year[i] = reader->GetString(10);
	//		Credit[i] = reader->GetInt32(11);

	//		i++;
	//	}
	//	reader->Close();
	//	sqlConn.Close();
	//}
	//catch (SqlException^ e) {
	//	Console::WriteLine("Failed to connect to database");
	//}

	//for (int i = 0; i < CNum; i++) {
	//	cout < CRN[i] + " " + Title[i];
	//	Console::WriteLine(Department[i] + " " + Semester[i] + " " + Year[i] + " Credit: " + Credit[i]);
	//	Console::WriteLine("Lecture: " + lectureDays[i] + " " + lecStart[i] + "-" + lecEnd[i]);
	//	Console::WriteLine("Lab: " + labDays[i] + " " + labStart[i] + "-" + labEnd[i]);
	//	Console::WriteLine("--------------------------------------------------");
	//}

}
