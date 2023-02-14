//Course.cpp
#include "pch.h"
#include "Course.h"

// CONSTRUCTOR
Course::Course(int CRN, String^ courseName, String^ department, String^ lecDays, int lecStart, int lecEnd, String^ labDays, int labStart, int labEnd, String^ semester, String^ year, int credits)
	: crn{ CRN }, nam{ courseName }, dep{ department },
		lecd{ lecDays }, lecs{ lecStart }, lece{ lecEnd },
		labd{ labDays }, labs{ labStart }, labe{ labEnd },
		ss{ semester }, sy{ year }, cc{ credits }
	{}

void Course::setCRN(int newCRN) { crn = newCRN; }
void Course::setTitle(String^ newTitle) { nam = newTitle; }
void Course::setDep(String^ newDep) { dep = newDep; }

void Course::setLecD(String^ newLecD) { lecd = newLecD; }
void Course::setLecS(int newLecS) { lecs = newLecS; }
void Course::setLecE(int newLecE) { lece = newLecE; }

void Course::setLabD(String^ newLabD) { labd = newLabD; }
void Course::setLabS(int newLabS) { labs = newLabS; }
void Course::setLabE(int newLabE) { labe = newLabE; }

void Course::setSem(String^ newSemester) { ss = newSemester; }
void Course::setYear(String^ newYear) { sy = newYear; }
void Course::setCredit(int newCredit) { cc = newCredit; }

//DESTRUCTOR
Course::~Course() {}