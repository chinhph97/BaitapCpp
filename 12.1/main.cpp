#include"List.h"
int main() {
	list<People*> L;
	addList(L);
	printList(L);
	modify(L);
	printList(L);
	deleteList(L);
	L.clear();
	system("pause");
}
