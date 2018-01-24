#include <iostream>
#include <list>
#include "mylist_iter.h"

using namespace std;

struct Node
{
	struct Node* _Next;
	struct Node* _Prev;
	int data;
};

typedef struct Node* _NodePtr;

int main()
{
 	list<int> int_list(8);
	list<int>::iterator ier;
// 	_NodePtr p = new Node;
// 	
// 	void *pr = &((*p)._Prev);
// 	void *ne = &((*p)._Next);
// 	_NodePtr *prev = ::new(pr) _NodePtr(p);
// 	_NodePtr *next = ::new(ne) _NodePtr(p);
// 	cout << "p  " << p << endl;
// 	cout << "prev  " << prev << endl;
// 	cout << "next  " << next << endl;

	List<int> mylist;
	mylist.insert_front(1);
	mylist.insert_front(2);
	mylist.insert_front(3);
	mylist.insert_front(9);

	return 0;
}