/*
Abraham CRONIN - 7094
Collin BREE - 5488
Etienne HOLOHAN - 8521
, AAAA - 10000
, ZZZZ - 10000
*/

#include "StudentLinkedList.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

void main() {
	ifstream inputFile; 
	inputFile.open("Studentdata.txt"); 
	StudentLinkedList list; 
	string last, first, fsearch, lsearch; 
	int ID; 
	double grade;
	

	for (int i = 0; i < 10000; i++) {

		inputFile >> last >> first >> ID >> grade;
		list.addStudent(first, last, ID, grade);

	}

	cout << "Enter Student to find (or end with zz zz): "; 
	cin >> fsearch >> lsearch; 
	cout << endl;

	while (fsearch != "zz" && lsearch != "zz") {
		
		if (!list.findStudent(fsearch, lsearch)) {
			cout << "Not found. Number of Comparisons made: " << list.numofComparisons << endl << endl;
		}
		cout << "Enter Student to find (or end with zz zz): ";
		cin >> fsearch >> lsearch;
		cout << endl;
	}
	
	inputFile.close(); 
}