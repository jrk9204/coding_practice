#include <iostream>
#include <string>

using namespace std;


struct StudentInfo {

	string name = " ";
	double Student_ID = 0;
	int age = 0;
	double GPA = 0;

};


void getInfo(StudentInfo* );
void display(StudentInfo);

int main()
{
	StudentInfo student;

	getInfo(&student);

	display(student);


}



void getInfo(StudentInfo* info)
{
	
	cout << "Enter Student Name" << endl;
	getline(cin, info->name);

	cout << "Enter Student ID" << endl;
	cin >> info->Student_ID;

	cout << "Enter Student age" << endl;
	cin >> info->age;

	cout << "Enter Student GPA" << endl;
	cin >> info->GPA;
	

}


void display(StudentInfo display)

{
	cout << display.name << endl;

	cout << display.Student_ID << endl;

	cout << display.age << endl;

	cout << display.GPA << endl;



}
