#include<iostream.h>
#include<conio.h>

class student
{
	int rno;
	char name[50];
	double fee;

	public:
	student(int, char[],double);
	void display();
};
//parameterized constructor outside
class
student::student(int no,char n[],double f)
{
	rno=no;
	strcpy(name, n);
	fee f;
}

void student::display()
{
	cout<<rno<<"\t"<<name<<"\t"<<fee;
}

//driver code
void main()
{
	student s(1001,"Ram" 100000);
	s.display();
	getch();
}