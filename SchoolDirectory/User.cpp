// User.cpp
#include "pch.h"
#include "User.h"

User::User(int ID, String^ fName, String^ lName, String^ pwd, String^ eml)
	:userID{ ID }, firstName{ fName }, lastName{ lName }, password{ pwd }, email{ eml }
{
	/*cout << "Constructor called for User" << endl;*/
}

//GET FUNCTIONS
int User::getId() { return userID; }
String^ User::getfName() { return firstName; }
String^ User::getlName() { return lastName; }
String^ User::getPwd() { return password; }
String^ User::getEml() { return email; }

//SET FUNCTIONS
void User::setfName(String^ fN) { firstName = fN; }
void User::setlName(String^ lN) { lastName = lN; }
void User::setEml(String^ Eml) { email = Eml; }
void User::setPwd(String^ Pwd) { password = Pwd; }

void User::searchCourse(String^ connString) {
	CourseList tryCourseList;
	tryCourseList.loadCourseValues(connString);

	char choice;
	int looper = 0;
	int searchCRN;
	String^ searchTitle;

	while (looper == 0) {
		Console::WriteLine("------Course Search------");
		Console::WriteLine("a - view all courses");
		Console::WriteLine("c - search by CRN");
		Console::WriteLine("t - search by course name");
		Console::WriteLine("x - back");
		choice = Convert::ToChar(Console::ReadLine());
		switch (choice) {
		case 'a':
			// print all courses to screen
			tryCourseList.printCourseList();
			break;
		case 'c':
			Console::WriteLine("Enter CRN: ");
			searchCRN = Convert::ToInt32(Console::ReadLine());
			tryCourseList.searchbyCRN(searchCRN);
			break;
		case 't':
			Console::WriteLine("Enter Title: ");
			searchTitle = Console::ReadLine();
			tryCourseList.searchbyTitle(searchTitle);
			break;
		case 'x':
			looper++;
			break;
		}
	}
}

//DESTRUCTOR
User::~User()
{}
