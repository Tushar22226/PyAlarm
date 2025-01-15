
#include<iostream.h>
#include<conio.h>

class A
{
	public:
	void show_A()
	{
		cout<<"\n class A";
	}
};
class B:public A
{
	public:
	void show_B()
	{
		cout<<"\n class B";
	}
};
class C:public A
{
	public:
	void show_C()
	{
		cout<<"\n class C";
	}
};

void main()
{
	clrscr();
	B b;
	cout<<"\n calling from B:";
	b.show_B();
	b.show_A();

	C c;
	cout<<"\n calling from C:";
	c.show_C();
	c.show_A();
	getch();
}