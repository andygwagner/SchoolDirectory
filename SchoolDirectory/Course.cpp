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

//SET FUNCTIONS
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

//GET FUNCTIONS
int Course::getCRN() { return crn; }
String^ Course::getTitle() { return nam; }
String^ Course::getDep() { return dep; }

String^ Course::getLecD() { return lecd; }
int Course::getLecS() { return lecs; }
int Course::getLecE() { return lece; }

String^ Course::getLabD() { return labd; }
int Course::getLabS() { return labs; }
int Course::getLabE() { return labe; }

String^ Course::getSem() { return ss; }
String^ Course::getYear() { return sy; }
int Course::getCredit() { return cc; }

//DESTRUCTOR
Course::~Course() {}