/*
 * CircularLlist.cpp
 *
 *  Created on: Apr 8, 2018
 *      Author: andre barajas
 */

#include "CircularLlist.h"
#include <iostream>
using namespace std;
CircularLlist::CircularLlist()
{
	// TODO Auto-generated constructor stub
	head  = NULL;
	curr = NULL;
	tail = NULL;
	temp = NULL;
}
void CircularLlist:: addNode(int addData)
{
	nodePtr n = new node;
	n->next = NULL;
	n->data = addData;

	if(head != NULL  )
	{
		curr = head;
		int first = 0;
		while(curr->next != NULL && count != first  )
		{
			curr = curr ->next;
			first++;
		}
		curr -> next  = n;
		tail = n;
		tail->next=  head;
	}
	else
	{
		head = n;
		//tail-> next = NULL;
	}
	count++;
}
void CircularLlist:: deleteNode(int delData)
{
	nodePtr delPtr = NULL;
	temp = head;
	curr = head;
	while(curr != NULL && curr ->data != delData)
	{
		temp = curr;
		curr = curr->next;
	}
	if(curr==NULL)
	{
		cout << delData << " was not in list\n";
		delete delPtr;
	}
	else
	{
		delPtr = curr;
		curr = curr->next;
		temp->next= curr;
		if(delPtr ==head)
		{
			head =  head->next;
			temp = NULL;
		}
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";
	}
}
void CircularLlist:: SearchRecursive(node* Ptr, int searchValue)
{
	if (Ptr == NULL)
	{
		cout << searchValue << " was not fount in the list\n";
	}
	else if (Ptr->data == searchValue)
	{
		cout << searchValue << " wis in the list\n";
	}
	else
	{
		SearchRecursive(Ptr->next, searchValue);
	}
}


void CircularLlist:: printList()
{
	curr = head;
	int first = 0;
	while(curr != NULL&& count != first)
	{
		cout << curr->data << endl;
		curr = curr->next;
		first++;
	}
}
CircularLlist::~CircularLlist()
{
	// TODO Auto-generated destructor stub
}
