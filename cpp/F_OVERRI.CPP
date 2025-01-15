#include<iostream.h>
#include<conio.h>

class parent
{
	public:
	void func()
	{
		cout<<"\n Base Function";
	}
};
class child:public parent
{
	public:
	void func()
	{
		cout<<"\n Derived Function";
	}
};

void main()
{
	clrscr();
	child child_Derived;
	child_Derived.func();

	child_Derived.parent::func();

	getch();
}