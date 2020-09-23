#ifndef NUMBERLIST_H
#define NUMBERLIST_H

struct  Node
{
	double element = 0.0;
	struct Node* next = nullptr;

};

class link 
{
private:
		struct Node* head;
		int count;


public:
	link();
	~link();
	void addNode(double);
	void displayAll();

};








#endif // !NUMBERLIST_H

