#include "StudentNode.h"
using namespace std;

int StudentNode::numStudents = 0; 

StudentNode::StudentNode(double num, string fname, string lname, int n) {
	finalGrade = num; 
	firstName = fname; 
	lastName = lname; 
	nextS = 0; 
	ID = n;
	numStudents++; 
}
void StudentNode::setID(int num) {
	ID = num; 

}
void StudentNode::setName(string name) {
	firstName = name;

}
int StudentNode::getID() {
	return ID;

}
string StudentNode::getfirstName() {
	return firstName; 

}

string StudentNode::getlastName() {
	return lastName;
}

StudentNode* StudentNode::getNext() {
	return nextS;

}
void StudentNode::setNext(StudentNode* next) {
	nextS = next;

}

double StudentNode::getGrade() {
	return finalGrade;

}
void StudentNode::setGrade(int grade) {
	finalGrade = grade;

}
StudentNode::StudentNode(int digits, double num, string name) {
	ID = digits; 
	finalGrade = num;
	firstName = name; 
	nextS = 0;
}
void StudentNode::printMarks() {
	cout << "Student ID: " << ID << endl;
	cout << "Student Name: " << firstName << " " << lastName << endl; 
	cout << "Student Final Grade: " << finalGrade << endl;
	
}



StudentNode::StudentNode(double num, string fname) {
	finalGrade = num;
	firstName = fname;
	nextS = 0;
	ID = numStudents;
	numStudents++;
}