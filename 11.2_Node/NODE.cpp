#include "NODE.h"
template<class T>
Node<T>::Node()
{
}

template<class T>
Node<T>::~Node()
{
}
template<class T>
Node::Node(const Node&)
{
	this->data = new People;
	this->next = NULL;

	Node *p = s.next, *q = this;
	while (p != NULL) {
		Node *element = new Node;			

		element->data = new T;
		T::clone(*s, *s2);	
		element->next = NULL;
		q->next = element;
		q = q->next;
		p = p->next;
	}
}
template<class T>
void Node::nulllist()
{
	data = new T;
	next = NULL;
}
template<class T>
void Node::add()
{
	Node* p = new Node, *temp = this;

	p->data = new T;
	p->data->init();			
	p->next = NULL;

	while (temp->next != NULL)
		temp = temp->next;
	temp->next = p;
}
template<class T>
void Node::remove()
{
	int id;
	cout << "Nhap vao ID:                ";
	cin >> id;

	Node* temp = this, *p;
	while (temp->next != NULL)
	{
		if (temp->next->data->getID() == id) {
			p = temp->next;
			temp->next = temp->next->next;
			delete p;
			cout << "Removed!" << endl;
			break;
		}
		else
		{
			temp = temp->next;
		}
	}
}
template<class T>
void Node::removeall()
{
	Node* iterator, *p;
	while (this->next != NULL)
	{
		iterator = this;
		while (iterator->next->next != NULL)
		{
			iterator = iterator->next;
		}
		p = iterator->next;
		iterator->next = NULL;
		delete(p);
	}
}
template<class T>
void Node::PrintList()
{
	Node* temp = this;
	while (temp->next != NULL) {
		temp->next->data->PrintInfo();
		cout << endl;
		temp = temp->next;
	}
}
