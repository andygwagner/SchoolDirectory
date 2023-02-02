#include "pch.h"
#include "User.h"
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

void userLogin(String^, String^);

enum dbtableValues {
	Id = 0,
	firstName = 1,
	lastName = 2,
	uniqueVar = 3,
	password = 4,
	email = 5
};

int main(array<System::String ^> ^args)
{
	int looper = 0;
	String^ connString = "Data Source=.\\SQLEXPRESS;Initial Catalog=LeopardDatabase;Integrated Security=True";
	while (looper == 0) {
		Console::WriteLine("Choose user type: ");
		Console::WriteLine("1: admin");
		Console::WriteLine("2: instructor");
		Console::WriteLine("3: student");
		Console::WriteLine("0: quit");
		int userType = Convert::ToInt32(Console::ReadLine());
		switch (userType) {
		case 1:
			userLogin(connString, "admin");
			break;
		case 2:
			userLogin(connString, "instructor");
			break;
		case 3:
			userLogin(connString, "student");
			break;
		case 0:
			Console::WriteLine("Closing Program...");
			looper++;
		};
	}
	

    return 0;
}

void userLogin(String^ connString, String^ userType) {
	int ID; 
	String^ fName;
	String^ lName;
	String^ unqV;
	String^ pwd;
	String^ eml;

	String^ inputEml;
	String^ inputPwd;
	
	Console::WriteLine("Enter your email: ");
	inputEml = Console::ReadLine();
	Console::WriteLine("Enter your password: ");
	inputPwd = Console::ReadLine();

	try {
		SqlConnection sqlConn(connString);
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM " + userType + " WHERE email = @eml AND password = @pwd; ";

		SqlCommand command(sqlQuery, % sqlConn);
		command.Parameters->AddWithValue("@eml", inputEml);
		command.Parameters->AddWithValue("@pwd", inputPwd);

		SqlDataReader^ reader = command.ExecuteReader();
		if (reader->Read()) {
			ID = reader->GetInt32(Id);
			fName = reader->GetString(firstName);
			lName = reader->GetString(lastName);
			unqV = reader->GetString(uniqueVar);
			pwd = reader->GetString(password);
			eml = reader->GetString(email);

			sqlConn.Close();
			if (userType == "admin") {
				Admin currentUser(ID, fName, lName, pwd, eml, unqV);
				currentUser.adminMenu(connString);
			}
			else if (userType == "instructor") {
				Instructor currentUser(ID, fName, lName, pwd, eml, unqV);
				currentUser.printCredentials();
			}
			else if (userType == "student") {
				Student currentUser(ID, fName, lName, pwd, eml, unqV);
				currentUser.printCredentials();
			}
			else {
				Console::WriteLine("Email or password is incorrect.");
			}
		}
		else {
			Console::WriteLine("Email or password is incorrect.");
		}
		reader->Close();
		sqlConn.Close();
	}
	catch (SqlException^ e) {
		Console::WriteLine("Failed to connect to database");
	}
}