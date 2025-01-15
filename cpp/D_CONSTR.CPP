#include<iostream.h>
#include<conio.h>

class student
{
	int rno;
	char name[50];
	double fee;

	public:
	// constructor declaration only
	student();
	void display();
};
student::student()
{
	cout<<"Enter the RollNo:";
	cin>>rno;
	cout<<"Enter the Name:";
	cin>>name;
	cout<<"Enter the Fee:";
	cin>>fee;
}
void student::display()
{
	cout<<rno<<"\t"<<name<<"\t"<<fee;
}

//driver code
void main()
{
	clrscr();
	student s;
	s.display();
	getch();
}