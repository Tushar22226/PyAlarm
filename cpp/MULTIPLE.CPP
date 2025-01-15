#include<iostream.h>
#include<conio.h>

class A
{
	public:
	A()
	{
		cout<<"\n A's constructor called";
	}
};
class B
{
	public:
	B()
	{
		cout<<"\n B's constructor called";
	}
};
class C: public B,public A
{
	public:
	C()
	{
		cout<<"\n C's constructor called";
	}
};
void main()
{
	clrscr();
	C c;
	getch();
}