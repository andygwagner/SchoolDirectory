#include "pch.h"
#include "User.h"
#include "Admin.h"
#include "CreateCourseList.h"
#include "Login.h"

int main(array<System::String ^> ^args)
{
	Login tryLog;
	CourseList tryCourseList;

	String^ connString = "Data Source=.\\SQLEXPRESS;Initial Catalog=LeopardDatabase;Integrated Security=True";

	/*tryCourseList.createCourseList(connString);
	tryCourseList.printCourseList();*/
	String^ userType = tryLog.checkUserType(connString);

	if (userType != "") {
		tryLog.userLogin(connString, userType);
	}
	else {
		Console::WriteLine("Closing Program...");
	}
    return 0;
}