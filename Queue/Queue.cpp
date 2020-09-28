#include "Queue.h"
#include <iostream>
using namespace std;

Queue::Queue()
{
	head = nullptr;
	rear = nullptr;
	index = 0;
	
	cout << "Start queue" << endl;

}

Queue::~Queue()
{


	clear();

}


void Queue::push(int num)
{
	Node* newNode = nullptr;
	Node* searchNode = nullptr;

	newNode = new Node;
	newNode->element = num;
	newNode->next = nullptr;

	if (empty())
	{
		head = newNode;
		rear = newNode;
	
	}

	else
	{
		
		searchNode = head;

		while (searchNode != nullptr)
		{

			rear = searchNode;

			searchNode = searchNode->next;

		}

		
		rear->next = newNode;


	
	}
	
	index++;


}
void Queue::pop()
{
	Node* tempNode = nullptr;
	if (head == nullptr)
		cout << "-1" << '\n';

	else
	{
		tempNode = head;

		cout << tempNode->element << endl;

		head = head->next;

		delete tempNode;


	}


}


void Queue::size()
{


	cout << index << endl;

}
bool Queue::empty()
{

	if (head == nullptr)
	{
		cout << "Empty" << endl;
		return true;
	}
	
	else
	{
		cout << "Not Empty" << endl;
		return false;
	}


}

void Queue::front()
{
	if (!empty())
		cout << head->element << endl;
	else
		cout << "-1" << endl;
}

void Queue::back()
{
	if (!empty())
		cout << rear->next->element << endl;
	else
		cout << "-1" << endl;
}

void Queue::clear()
{

	while (!empty())
	{
		pop();
	}

	cout << "Success dequeue" << endl;


}