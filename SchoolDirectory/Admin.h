// Admin.h
#ifndef ADMIN_H
#define ADMIN_H

#include "User.h"

ref class Admin : public User
{
public:
	//CONSTRUCTOR
	Admin(int,String^,String^,String^,String^,String^);

	void printCredentials();
	void adminMenu(String^);
	void printUsers(String^);

	String^ getOffice();
	void setOffice(String^);

	//DESTRUCTOR
	~Admin();

private:
	String^ adOffice;
};

#endif
