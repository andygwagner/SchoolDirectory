#ifndef USER_H
#define USER_H

#include "CreateCourseList.h"

using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;
using namespace System::Collections::Generic;

ref class User {
public:
	//CONSTRUCTOR
	User(int, String^, String^, String^, String^);

	//GET FUNCTIONS
	int getId();
	String^ getfName();
	String^ getlName();
	String^ getPwd();
	String^ getEml();

	//SET FUNCTIONS
	void setfName(String^);
	void setlName(String^);
	void setPwd(String^);
	void setEml(String^);

	//User Functions
	void searchCourse(String^);

	//DESTRUCTOR
	~User();

private:
	int userID;
	String^ firstName;
	String^ lastName;
	String^ password;
	String^ email;
	
};


#endif
