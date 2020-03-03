//Andre Barajas

//Circular Linked Lists Project
//This program is  a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#include "LinkedListNode.h"
#include "Node.h"
#include <iostream>
#include<string>
using namespace std;
LinkedListNode::LinkedListNode()
{
	head = NULL;
	tail = NULL;
}
LinkedListNode::~LinkedListNode()
{
	Node *dest = this->head, *remove = NULL;
	tail->setNextPtr(NULL);
	while (dest != NULL )
	{
		remove = dest;
		dest = dest->getNextPtr();
		cout << "deleting element: " << remove->getData() << endl;
		delete(remove);
	}
	head = tail = NULL;
}
int LinkedListNode::size()
{
	Node *locus = new Node;
	locus = head;
	int listSize = 0;
	while (locus != tail and locus !=NULL)
	{
		listSize++;
		locus = locus->getNextPtr();
	}
	if(locus == tail && locus != NULL)
	{
		listSize++;
	}
	return listSize;
}

void LinkedListNode::add(string data)
{
	Node *element = new Node;
	element->setData(data);
	element->setNextPtr(NULL);
	element->setPrevPtr(NULL);
	if (head == NULL)
	{
		head = element;
		tail = element;
		element = NULL;
	}
	else
	{
		tail->setNextPtr(element);
		element->setPrevPtr(tail);
		element->setNextPtr(head);
		tail = element;
	}
}
void LinkedListNode::addHead(string data)
{
	Node *newHead = new Node;
	newHead->setData(data);
	newHead->setNextPtr(head);
	newHead->setPrevPtr(tail);
	head->setPrevPtr(newHead);
	head = newHead;
}
void LinkedListNode::add_pos(int index, string data)
{
	if ( index <= 0 || index > size() )
		cout << "ERROR: index does not exist." << endl;
	else
	{
		Node *leftNode = new Node;
		Node *rightNode = new Node;
		Node *newNode = new Node;
		rightNode = head;
		for (int i = 1; i<index; i++)
		{
			leftNode = rightNode;
			rightNode = rightNode->getNextPtr();
		}
		newNode->setData(data);
		leftNode->setNextPtr(newNode);
		newNode->setNextPtr(rightNode);
		newNode->setPrevPtr(leftNode);
		rightNode->setPrevPtr(newNode);
	}
}
bool LinkedListNode::isEmpty()
{

	if (head == NULL)
		return true;
	else
		return false;
}
string LinkedListNode::deleteHead()
{
	string data = "";
	if (size() == 0)
		cout << "ERROR: no elements in list.";
	else
	{
		Node *front = new Node;
		//a = head->getData();
		front = head;
		data = front->getData();
		head = head->getNextPtr();
		head->setPrevPtr(tail);
		delete front;
	}
	return data;
}
string LinkedListNode::deleteTail()
{
	Node *last = new Node;
	last = tail;
	 tail = tail->getPrevPtr();
			 tail->setNextPtr(head);
			 head->setPrevPtr(tail);
	string data = last->getData();
	delete last;
	return data;
}
string LinkedListNode::delete_pos(int index)
{
	string data = "";
	if (index < 0 or index > size())
		cout << "ERROR: No such index exists." << endl;
	else
	{
		Node *currentNode = new Node;
		Node *prevNode = new Node;
		currentNode = head;
		for (int i = 1; i< index; i++)
		{
			prevNode = currentNode;
			currentNode = currentNode->getNextPtr();
		}
		data = currentNode->getData();
		prevNode->setNextPtr(currentNode->getNextPtr());
		currentNode->getNextPtr()->setPrevPtr(prevNode);
		delete currentNode;
	}
	return data;
}
void LinkedListNode::display()
{
	if (head == NULL)
		return;
	Node *tempNode = new Node;
	tempNode = head;
	do
	{
		cout << tempNode->getData() << " ";
		tempNode = tempNode->getNextPtr();
	}while (tempNode != tail);
	if(tempNode==tail)
		cout << tempNode->getData() << endl;
}
string LinkedListNode::to_string()
{
	string data = "";
	Node *tempNode = new Node;
	tempNode = head;
	while (tempNode != NULL and tempNode !=tail)
	{
		data = data + tempNode->getData() + ",";
		tempNode = tempNode->getNextPtr();
	}
	if (tempNode == tail)
		cout << tempNode->getData() << endl;
	return data;
}

string LinkedListNode::first()
{
	string data = head->getData();
	return data;
}

string LinkedListNode::last()
{
	string data = tail->getData();
	return data;
}

void LinkedListNode::addFirst(string x)
{
	Node *tempNode = new Node;
	tempNode->setData(x);
	tempNode->setNextPtr(head);
	tempNode->setPrevPtr(tail);
	head = tempNode;
}

void LinkedListNode::addLast(string data)
{
	Node *tempNode = new Node;
	tempNode->setData(data);

	if (head == NULL)
	{
		tail = tempNode;
		head =tail;
	}
	else
	{
		tail->setNextPtr(tempNode);
		tempNode->setPrevPtr(tail);
		tail = tempNode;
	}
	tail->setNextPtr(head);
}

void LinkedListNode::removeFirst()
{
	if (head == NULL)
	{
		return;
	}
	Node *tempNode = new Node;
	tempNode = head;

	tail->setNextPtr(head->getNextPtr());
	head = head->getNextPtr();
	head->setPrevPtr(tail);

	delete tempNode;
}

void LinkedListNode::removeLast()
{
	if (head == NULL)
		return;

	Node *tempNode = new Node;
	Node *currNode = new Node;
	tempNode = head;
	currNode = head;

	while (currNode != tail)
	{
		tempNode = currNode;
		currNode = currNode->getNextPtr();
	}

	tempNode->setNextPtr(head);
	tail = tempNode;
	head->setPrevPtr(tail);

	delete currNode;
}

void LinkedListNode::rotate()
{
	if (size() == 0 || size() == 1)
		return;
	tail->setNextPtr(head);
	tail = tail->getNextPtr();
	head = tail->getNextPtr();
}
