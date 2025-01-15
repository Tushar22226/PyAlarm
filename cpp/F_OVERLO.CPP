#include<iostream.h>
#include<conio.h>

class function
{
	public:
	//function with 1 int parameter
	void func(int x)
	{
		cout<<"\n value of x is"<<x;
	}

	//function with same name but
	//1 double parameter
	void func(double x)
	{
		cout<<"\n value of x is"<<x;
	}

	//function with same name and 2 int parameters
	void func(int x,int y)
	{
		cout<<"\n value of x and y is"<<x<<y;
	}
};

//driver code
void main()
{
	clrscr();
	function obj1;
	//function being called depends
	//on the parameter passed
	//fun() is called with int value
	obj1.func(7);

	//func() is called with double value
	obj1.func(9.132);

	//func() is called with 2 int value
	obj1.func(85, 64);
	getch();
}