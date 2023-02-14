#include "pch.h"
#include "User.h"
#include "Admin.h"
#include "CreateCourseList.h"
#include "Login.h"

//using namespace System;
//using namespace System::Data;
//using namespace System::Data::SqlClient;
//using namespace System::Collections::Generic;

int main(array<System::String ^> ^args)
{
	Login tryLog;

	String^ connString = "Data Source=.\\SQLEXPRESS;Initial Catalog=LeopardDatabase;Integrated Security=True";
	String^ userType = tryLog.checkUserType(connString);

	if (userType != "") {
		tryLog.userLogin(connString, userType);
	}
	else {
		Console::WriteLine("Closing Program...");
	}
    return 0;
}