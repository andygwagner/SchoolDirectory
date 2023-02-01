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

void createUser(String^);
void MarshalString(String^, std::string&);

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
	createUser(connString);

    return 0;
}

void createUser(String^ connString) {
	int ID; 
	String^ fName;
	String^ lName;
	String^ unqV;
	String^ pwd;
	String^ eml;

	try {
		SqlConnection sqlConn(connString);
		Console::WriteLine("Connecting to database...");
		sqlConn.Open();
		String^ sqlQuery = "SELECT * FROM admin WHERE Id = 30001;";
		SqlCommand command(sqlQuery, % sqlConn);
		SqlDataReader^ reader = command.ExecuteReader();
		while (reader->Read()) {
			ID = reader->GetInt32(Id);
			fName = reader->GetString(firstName);
			lName = reader->GetString(lastName);
			unqV = reader->GetString(uniqueVar);
			pwd = reader->GetString(password);
			eml = reader->GetString(email);
		}

		Admin currentUser(ID, fName, lName, pwd, eml, unqV);
		currentUser.printCredentials();

		sqlConn.Close();
	}
	catch (SqlException^ e) {
		Console::WriteLine("Failed to connect to database");
	}
}