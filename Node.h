#ifndef _NODE_H_
#define _NODE_H_

#include <iostream>
#include <string>
#include <vector>
#include <cmath>


class Node {
public:
	// constructor
	Node();
	Node(int student, int klasse, int grade);
	
	// setters
	void setStudent(int);
	void setKlasse(int);
	void setGrade(int);
	
	void setPrevStudent(Node* prevStudent);
	void setNextStudent(Node* nextStudent);
	void setPrevKlasse(Node* prevKlasse);
	void setNextKlasse(Node* nextKlasse);
	void setPrevGrade(Node* prevGrade);
	void setNextGrade(Node* nextGrade);

		
	// getters
	int getStudent();
	int getKlasse();
	int getGrade();
	
	Node* getPrevStudent();
	Node* getStudent();
	Node* getPrevKlasse();
	Node* getNextKlasse();
	Node* getPrevGrade();'
	Node* getNextGrade();


		
private:
	int student;
	int klasse;
	int grade;
	Node* student;
	Node* klasse;
	Node* grade;
	Node* prevStudent;
	Node* prevKlasse;
	Node* prevGrade;
	Node* nextStudent;
	Node* nextKlasse;
	Node* nextGrade;
	
};

#endif
