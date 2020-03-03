//Andre Barajas

//Circular Linked Lists Project
//This program is a container template for a string type
//Where every node has a pointer to the next and previous node
// and the tail of the CLL is connected to the head of the list.
#include "LinkedListNode.h"
#include <string>
#include <iostream>

using namespace std;
int main()
{

	std::cout << "Hello, World!" << endl;
	int a = 89;
	string say = "Eloo Chap";
	cout << say << a << endl;
	say = say + to_string(a);
	cout << say << endl;

	LinkedListNode myList;
	cout << "size: " << myList.size()  << endl;

	cout  << "deletingHead: " << endl;
			cout << myList.deleteHead() ;

	myList.add("9");
	myList.add("8");
	myList.add("4");
	myList.add("3");
	myList.add("8");
	myList.add("4");
	myList.add("3");
	myList.addHead("11");
	myList.addHead("22");
	myList.addHead("33");
	myList.add_pos(-1, "55");
	cout << "\nSize..." << myList.size() << endl;
	myList.add_pos(5, "55");
	myList.add_pos(5, "34");
	myList.add_pos(5, "55");
	cout << myList.to_string();
	cout << "\nDelelte Head.. " << myList.deleteHead();
	cout << "\nSize..." << myList.size() << endl;
	cout << myList.to_string();
	cout << "\nDelete Tail.. " << myList.deleteTail();
	cout << "\nSize..." << myList.size() << endl;
	cout << myList.to_string();
	cout << "\nDeleted the following element: " << myList.delete_pos(3);
	cout << "\nSize..." << myList.size() << endl;
	cout << myList.to_string();
	cout << endl;
	cout << myList.isEmpty()<<endl;
	cout << myList.to_string()<<endl;
	cout << myList.first()<<endl;
	myList.add("77");
	cout << myList.to_string() << endl<<endl<<endl;
	cout << myList.first()<<endl;
	cout << myList.to_string() << endl;
	cout<< myList.last();
	cout << endl;
	myList.addFirst("100");
	cout << myList.to_string()<<endl<<endl;
	//myList.addLast("27");
	cout << myList.to_string()<<endl;
	//cout << "Adding element to the end: " << endl;
	cout << "I will rotate the circular list ";
	myList.rotate();
	//cout << myList.to_string()<<endl;
	myList.display();

 return 0;

}
