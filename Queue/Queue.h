#ifndef QUEUE_H
#define QUEUE_H

struct Node {

	int element;
	struct Node* next = nullptr;

};


class Queue
{
private:
	struct Node* head;
	struct Node* rear;
	int index;

public:
	Queue();
	~Queue();
	void push(int);
	void pop();
	void size();
	bool empty();
	void front();
	void back();
	void clear();
};




#endif // !"QUEUE_H"
