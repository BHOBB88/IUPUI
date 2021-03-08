#include "Node.h"

Node::Node() {

}

void Node::setStudent(int) {
	Node::Student = student;
}

void Node::setPrevStudent(Node* prevStudent) {
	Node::setPrevStudent = prevStudent;
}

void Node::setNextStudent(Node* nextStudent) {
	Node::setNextStudent = nextStudent;
}

void Node::setKlasse(int) {
	Node::Klasse = klasse;
}

void Node::setPrevKlasse(Node* prevKlasse) {
	Node::setPrevKlasse = prevKlasse;
}

void Node::setNextKlasse(Node* nextKlasse) {
	Node::setNextKlasse = nextKlasse;
}

void Node::setGrade(int) {
	Node::Grade = grade;
}

void Node::setPrevGrade(Node* prevGrade) {
	Node::setPrevGrade = prevGrade;
}

void Node::setNextGrade(Node* nextGrade) {
	Node::setNextGrade = nextGrade;
}

int Node::getStudent() {
	return student;
}

int Node::getPrevStudent() {
	return prevStudent;
}

int Node::getNextStudent() {
	return nextStudent;
}

int Node::getKlasse() {
	return klasse;
}

int Node::getPrevKlasse() {
	return prevKlasse;
}

int Node::getNextKlasse() {
	return nextKlasse;
}

int Node::getGrade() {
	return grade;
}

int Node::getPrevGrade() {
	return prevGrade;
}

int Node::getnextGrade() {
	return nextGrade;
}
