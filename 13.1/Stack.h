#pragma once
#define MAX 100;
#include<iostream>
using namespace std;
template<class T>
class Stack
{
public:
	Stack();
	~Stack();
	Stack(int);
	bool push(T obj);
	T pop();
	bool isEmpty();
	bool isFull();
	T getItem(int);
	int getTotal();

private:
	T* stack;
	int total;
	int size;

};

