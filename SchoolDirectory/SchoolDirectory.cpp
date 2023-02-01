#include "pch.h"
#include "User.h"
#include "Admin.h"

#include <iostream>
#include <stdio.h>
#include <sstream>
#include <string>

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

void userLogin(String^);

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
	String^ connString = "Data Source=.\\SQLEXPRESS;Initial Catalog=LeopardDatabase;Integrated Security=True";
	userLogin(connString);

    return 0;
}

void userLogin(String^ connString) {
	int ID; 
	String^ fName;
	String^ lName;
	String^ unqV;
	String^ pwd;
	String^ eml;

	String^ inputEml;
	String^ inputPwd;
	String^ userType = "admin";
	
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

			Admin currentUser(ID, fName, lName, pwd, eml, unqV);
			currentUser.printCredentials();
		}
		else {
			Console::WriteLine("Email or password is incorrect.");
		}

		sqlConn.Close();
	}
	catch (SqlException^ e) {
		Console::WriteLine("Failed to connect to database");
	}
}