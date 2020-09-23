#include "NumberList.h"
#include <iostream>
using namespace std;

link::link()
{
	cout << "Start Linked List" << endl;
	head = nullptr;
	count = 0;
}


link::~link()
{
	Node* del = nullptr;
	Node* SaveNullPoint = nullptr;

	del = head;

	while (del !=nullptr)
	{

		SaveNullPoint = del->next;

		delete del;

		del = SaveNullPoint;

	}
	cout << "Success delete all nodes" << endl;
}


void link::addNode(double num)
{
	Node* newNode = nullptr;
	Node* newFind = nullptr;

	newNode = new Node;

	newNode->element = num;
	newNode->next = nullptr;

	if (head == nullptr)
		head = newNode;

	else
	{
		newFind = head;

		while (newFind->next != nullptr)
		{
			newFind = newFind->next;
		}


		newFind->next = newNode;


	}




}

void link::displayAll()
{
	Node* Tracking = nullptr;

	Tracking = head;


	while (Tracking->next != nullptr)
	{

		cout << Tracking->element << endl;

		Tracking = Tracking->next;

	}



}










//
//
//void link::addNode(double num)
//{
//	Node* newNode = nullptr; // to point to a new node.
//	Node* nodePtr = nullptr; // to find a last node. 
//
//	newNode = new Node; //newNode = new Node; // allocate memory.
//
//	newNode->element = num;
//	newNode->next = nullptr;
//
//
//	if (head == nullptr)
//	{
//		head = newNode;
//		cout << "head element address" << &(head->element) << endl;
//		cout << "head next addresss" << &(head->next) << endl;
//
//		cout << "Head element " << head->element << endl;
//	}
//
//	else
//	{
//		nodePtr = head;
//
//		cout << "(head) moving pointer address" << &(nodePtr->element) << endl;
//
//
//		while (nodePtr->next != nullptr) // this while loop is looking for a last element.
//
//		{
//
//			cout << "Tracking numbers " << nodePtr->element << endl;
//
//
//
//			nodePtr = nodePtr->next;
//
//			cout << "Next numbers " << nodePtr->element << endl;
//
//
//		}
//
//		nodePtr->next = newNode;
//
//
//		cout << "			NewNode is added" << (*(*nodePtr).next).element << endl;
//
//
//
//	}
//
//
//
//
//
//
//
//
//
//
//}