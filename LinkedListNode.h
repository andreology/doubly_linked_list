//Andre Barajas

//Circular Linked Lists Project
//This program is  a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#ifndef LINKEDLISTNODE_H
#define LINKEDLISTNODE_H
#include "Node.h"
#include <string>
using namespace std;
class LinkedListNode
{
private:
	Node * head, *tail;
public:
	LinkedListNode();
	~LinkedListNode();
	//Program requirements
	int size();
	void add(string);
	void addHead(string value);
	void add_pos(int pos, string value);
	bool isEmpty();
	string deleteHead();
	string deleteTail();
	string delete_pos(int pos);
	void display();
	string to_string();
	string first();
	string last();
	void addFirst(string);
	void addLast(string);
	void removeFirst();
	void removeLast();
	void rotate();
};
#endif
