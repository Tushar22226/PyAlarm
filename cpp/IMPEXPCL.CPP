#include<iostream.h>
#include<conio.h>
class set
{
	int a,b;
	public:
		void input()
		{
			cout<<"\nEnter a:";
			cin>>a;
			cout<<"\nEnter b:";
			cin>>b;
		}
		void disp()
		{
			cout<<"\nValue of a:"<<a;
			cout<<"\nValue of b:"<<b;
		}
		void change(set &y)
		{
			y.a=100;
			y.b=200;
			a=300;
			b=400;
		}
};
void main()
{
	clrscr();
	set x,y;
	x.input();
	y.input();
	x.disp();
	y.disp();
	cout<<"\nAfter change.....";
	x.change(y);
	y.disp();
	x.disp();
getch();
}