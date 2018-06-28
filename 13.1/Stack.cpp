#include "Stack.h"
template<class T>
Stack<T>::Stack()
{
}

template<class T>
Stack<T>::~Stack()
{
	delete stack;
}

template<class T>
Stack<T>::Stack(int x)
{
	total = 0;
	size = x;
	stack = new T[size];
	for (register int i = 0; i < size; i++)
		{
			stack[i] = 0;
		}
	int m = (sizeof(stack) / sizeof(stack[0]));
	cout << m;
}

template<class T>
bool Stack<T>::push(T obj) //add an item to the array
{
	if (isFull() != 0)
	{
		stack[total] = obj;
		total++;
		return true;
	}
	else 
	{
		return false;
	}
}

template<class T>
T Stack<T>::pop()
{
	if (!isEmpty())
	{
		T obj = stack[total - 1];
		stack[total - 1] = NULL;
		total--;
		return obj;
	}
	else
	{
		return NULL;
	}
}
template<class T>
bool Stack<T>::isEmpty()
{
	if (total == 0)
	{
		return  true;
	}
	else
		return false;
}
template<class T>
bool Stack<T>::isFull()
{
	{
		if (total == size)   //returns the length
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
template<class T>
T Stack<T>::getItem(int i)
{
	return this->stack[i - 1];
}
template<class T>
int Stack<T>::getTotal()
{
	return this->total;
}





