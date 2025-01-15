#include<iostream.h>
#include<conio.h>

class first
{
	public:void display()
	{
		cout<<"This is inside the class";
	}
};

class second:public first
{
	public:void display()
	{
		cout<<"This show is inside the second class which is derived from Parent class";
	}
};
void main()
{
	clrscr();
	first f;
	f.display();
	f.display();
	second s;
	s.display();
	s.display();

	getch();
}