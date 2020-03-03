//Andre Barajas

//Circular Linked Lists Project
//This program is  a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#include <iostream>
#include "Node.h"
#include <string>
using namespace std;
Node::Node()
{
	data = "";
	nextPtr = NULL;
	prevPtr = NULL;
}
Node::Node(string data0)
{
	data = data0;
	nextPtr = NULL;
	prevPtr = NULL;
}
void Node::setData(string data0)
{
	data = data0;
}
string Node::getData() const
{
	return data;
}
void Node::setNextPtr(Node * ptr)
{
	nextPtr = ptr;
}
Node* Node::getNextPtr() const
{
	return nextPtr;
}


void Node::setPrevPtr(Node * ptr)
{
	prevPtr = ptr;
}
Node* Node::getPrevPtr() const
{
	return prevPtr;
}
