//Andre Barajas

//Circular Linked Lists Project
//This program is  a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#ifndef CIRCULARLLIST_H_
#define CIRCULARLLIST_H_

class CircularLlist
{
private:
	typedef struct node
	{
		int data;
		node* next;
	}*nodePtr;

	nodePtr head;
	nodePtr curr;
	nodePtr tail;
	nodePtr temp;
	int count=0;
public:
	CircularLlist();
	void SearchRecursive(node* Ptr, int searchValue);
	void addNode(int addData);
	void deleteNode(int delData);
	void printList();
	virtual ~CircularLlist();
};

#endif /* CIRCULARLLIST_H_ */
