#ifndef LOGIN_H
#define LOGIN_H

#include "Login.h"
#include "User.h"
#include "Admin.h"
#include "Instructor.h"
#include "Student.h"
#include "pch.h"

using namespace System;

ref class Login {
public:
	Login();
	~Login();
	void userLogin(String^, String^);
	String^ checkUserType(String^);
private:
};
#endif
