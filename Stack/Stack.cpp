#include <string>
#include <vector>
#include <iostream>

using namespace std;


class stack {

private:
	vector <int> el;
	int index;

public:

	stack();
	
	void push(int);
	void pop();
	void size();
	bool empty();
	void top();
	void displayall();

};


stack::stack() {
	index = -1;
}

void stack::push(int element) {


	el.push_back(element);
	index++;


}

void stack::pop() {

	
	if(empty())
		cout << "-1" << endl;

	else
	{

		cout << el[index] << endl;

		//el.pop_back();

		index--;
	}

	

}



void stack::size() {

	cout << index+1 << endl;


}


bool stack::empty() {

	if (index == -1)
	{

		return true;
	}
	else
	{
	
		return false;

	}
}


void stack::top() {

	if (empty())
		cout << "-1" << endl;

	else
		cout << el[index] << endl;



}

void stack::displayall() {

	for (int i = 0; i <index; i++) {

		cout << el[i] << endl;
	}



}










int main()
{
	stack st;
	string order;
	int num,
		times;

	cin >> times;


	for (int i = 0; i < times; i++) {

		cin >> order;

		if (order == "push") {

			cin >> num;

			st.push(num);

		}


		if (order == "top") {
			st.top();

		}

		if (order == "size") {
			st.size();

		}

		if (order == "empty") {
			cout << st.empty()<<endl;


		}

		if (order == "pop") {

				st.pop();

			}




	}




	st.displayall();



	return 0;
}



