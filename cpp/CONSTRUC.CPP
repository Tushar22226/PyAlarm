#include<conio.h>
#include<iostream.h>
class set
{
	int data;
	public:
		set()
		{
			cout<<"Enter Data:";
			cin>>data;
		}
		void disp()
		{
			cout<<"\nData:"<<data;
		}
};
void main()
{
	clrscr();
	set x,y;
	x.disp();
	y.disp();
	getch();
}