#pragma once
#include <string> 
#include <iostream>
using namespace std; 


class StudentNode {
	
private:
	int ID; 
	string firstName; 
	string lastName;
	double finalGrade; 
	StudentNode* nextS; 
	static int numStudents;

public: 
	
	StudentNode(double num, string fname, string lname, int ID);
	void setID(int num); 
	void setName(string name); 
	int getID(); 
	string getfirstName();
	string getlastName();
	StudentNode* getNext(); 
	void setNext(StudentNode* next);
	double getGrade();
	void setGrade(int grade);
	StudentNode(int ID, double num, string name); 
	void printMarks(); 

	StudentNode(double num, string fname);
};