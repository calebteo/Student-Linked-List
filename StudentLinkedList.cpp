#include "StudentLinkedList.h"
#include <iostream>
using namespace std;

int StudentLinkedList::numofComparisons = 0;

StudentLinkedList::StudentLinkedList() {
	head = 0; 
	tail = 0; 

}
StudentLinkedList::~StudentLinkedList() {
	StudentNode* curr = head;
	StudentNode* next;

	while (curr != 0) {
		next = curr->getNext();
		delete curr;
		curr = next;
	}
}
void StudentLinkedList::printAllStudents() {
	StudentNode* curr;
	curr = head;
	while (curr != 0) {
		cout << "Student ID: " << curr->getID() << endl; 
		cout << "Student Name: " << curr->getfirstName() << " " << curr->getlastName() << endl; 
		cout << "Student Final Grade: " << curr->getGrade() << endl; 
		cout << endl;
		curr = curr->getNext(); 
	}

}
StudentNode* StudentLinkedList::findByfirstName(string fname) {
	StudentNode* curr = head; 
	while (curr != 0) {
		if (curr->getfirstName() == fname) {
			return curr;
		}
		curr = curr->getNext(); 
	}
	return 0; 
}

StudentNode* StudentLinkedList :: findBylastName(string lname) {
	StudentNode* curr = head;
	while (curr != 0) {
		if (curr->getlastName() == lname) {
			return curr;
		}
		curr = curr->getNext();
	}
	return 0;
}

StudentNode* StudentLinkedList::findByID(int num) {
	StudentNode* curr = head;
	while (curr != 0) {
		if (curr->getID() == num) {
			return curr;
		}
		curr = curr->getNext();
	}
	return 0;

}
void StudentLinkedList::addStudent(string fname, string lname, int ID, double num) {
	StudentNode* sNode = new StudentNode(num, fname, lname, ID);

	if (tail == 0) {
		head = tail = sNode;
	}
	else {
		tail->setNext(sNode);
		tail = sNode;
	}
}
bool StudentLinkedList::removeStudent(string name) {
	StudentNode* curr = head;
	StudentNode* prev = 0;
	while (curr != 0) {
		if (name == curr->getfirstName()) {
			if (curr == head) {
				head = curr->getNext();
			}
			else {
				prev->setNext(curr->getNext());
				if (curr == tail) {
					tail = prev;
				}
			}
			prev->setNext(curr->getNext());
			delete curr;
			return true; 
		}

	prev = curr;
	curr = curr->getNext();
	}
	return false; 
}

bool StudentLinkedList::removeStudent(StudentNode* sPointer) {
	StudentNode* curr = head;
	StudentNode* prev = 0;
	while (curr != 0) {
		if (sPointer == curr) {
			if (curr == head) {
				head = curr->getNext();
			}
			else {
				prev->setNext(curr->getNext());
				if (curr == tail) {
					tail = prev;
				}
			}
			
			delete curr;
			return true;
		}

		prev = curr;
		curr = curr->getNext();
	}
	return false;

}
bool StudentLinkedList::insertStudentAfter(StudentNode* sPointer, string name) {
	StudentNode* curr = head; 
	while (curr != 0) {
		if (name == curr->getfirstName()) {
			sPointer->setNext(curr->getNext()); 
			curr->setNext(sPointer); 
			return true;
		}
		curr = curr->getNext(); 
	}
	return false; 
}



StudentNode* StudentLinkedList::findStudent(string fname, string lname) {
	StudentNode* curr = head;
	numofComparisons = 0;

	while (curr != 0) {
		if (curr->getfirstName() == fname && curr->getlastName() == lname) {
			cout << "Found " << fname << " " << lname << endl; 
			curr->printMarks(); 
			cout << "Number of Comparasons made: " << numofComparisons << endl << endl;
			return curr;
		}
		curr = curr->getNext();
		numofComparisons++;
	}
	return 0;
}