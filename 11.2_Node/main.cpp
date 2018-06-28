#include "NODE.h"
template<class T>
/*explicit casting*/
void Cast()
{
	Teacher *t = new Teacher;
	t->init();

	Staff *s = (Staff*)(t);						
	People *p = (People*)(t);				

	Student* sv = new Student;
	sv->init();
	People *p2 = (People*)(sv);				
	People *P5 = (People*)(sv);					
	Teacher *T = (Teacher*)(P5);

	/*Dynamic casting*/
	Staff *s2 = dynamic_cast<Staff*>(t);		
	People *p3 = dynamic_cast<People*>(t);		

	People *p4 = dynamic_cast<People*>(sv);		
	People *p5 = dynamic_cast<People*>(sv);		
	Teacher *t2 = dynamic_cast<Teacher*>(p5);

	/*Static casting*/
	Staff *s3 = static_cast<Staff*>(t);		
	People *p6 = static_cast<People*>(t);		

	People *p7 = static_cast<People*>(sv);		
	People *p8 = static_cast<People*>(sv);	
	Teacher *t3 = static_cast<Teacher*>(p8);
}
void main() {
	Node<People> *L = new Node<People>;
	L->nulllist();

	int k = 1;

	do {
		L->add();
		cout << "continue? 0: No    1: Yes" << endl << "Your option: ";
		cin >> k;
	} while (k);

	L->remove();

	L->PrintList();

	L->removeall();
	L->PrintList();

	delete L;
	system("pause");
}



