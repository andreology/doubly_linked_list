//Andre Barajas

//Circular Linked Lists Project
//This program is  a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#include <iostream>
#include <string>
using namespace std;
#ifndef NODE_H
#define NODE_H
class Node
{
private:
	string data;
	Node *nextPtr;
	Node *prevPtr;
public:
	Node();
	Node(string d);
	void setData(string);
	string getData() const;
	void setNextPtr(Node*);
	Node* getNextPtr() const;
	void setPrevPtr(Node*);
		Node* getPrevPtr() const;
};
#endif
