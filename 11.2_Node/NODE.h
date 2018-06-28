#pragma once
#include "D:\BTLT\C++\C++\10.1_CLASS\People.h"
#include "D:\BTLT\C++\C++\10.1_CLASS\Staff.h"
#include "D:\BTLT\C++\C++\10.1_CLASS\Student.h"
#include "D:\BTLT\C++\C++\10.1_CLASS\Teacher.h"
template <class T>
class Node
{
private:
	T * data;
	Node *next;
public:
	Node();
	Node(const Node&);
	~Node();
	void nulllist();
	void add();
	void remove();
	void removeall();
	void PrintList();
};