#include<iostream.h>
#include<conio.h>

class sum
{
private:
	int x,y,z;
public:
	void add()
	{
		cout<<"Enter Two numbers:";
		cin>>x>>y;
		z=x+y;
		cout<<"Sum of two number is:"<<z;
	}
};

void main()
{
	clrscr();
	sum sm;
	sm.add();
	getch();
}
