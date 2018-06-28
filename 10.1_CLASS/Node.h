#pragma once
#include"People.h"
#include"Teacher.h"
#include"Student.h"
using namespace std;

class Node
{
public:
	People* Data;
	Node* Next;
	Node *Head;
	Node();
	Node(const Node&);
	~Node();
	void Output();
	static void Input(Node*);
	static void Remove(Node*, int);
	void AddPeople(People*);
	void PrintAvgSMT5();
	void swap(Node *a, Node *b);
	void bubbleSort();
	void WritetoFile(ofstream &f);
	static void ReadfromFile(ifstream &f, Node*);
};
