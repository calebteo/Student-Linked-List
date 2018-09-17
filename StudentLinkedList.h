#pragma once
#include "StudentNode.h"

class StudentLinkedList {
public:
	StudentNode* head;
	StudentNode* tail; 
	static int numofComparisons;

	StudentLinkedList(); 
	~StudentLinkedList(); 
	void printAllStudents(); 
	StudentNode* findByfirstName(string name); 
	StudentNode* findBylastName(string name);
	StudentNode* findByID(int num); 
	void StudentLinkedList::addStudent(string fname, string lname, int ID, double num);
	bool removeStudent(string name);
	bool removeStudent(StudentNode* sPointer);
	bool insertStudentAfter(StudentNode* sPointer, string name);

	StudentNode* findStudent(string fname, string lname);
};

