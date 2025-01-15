#include<iostream.h>
#include<conio.h>
void main()
{
	int a;
	int & sum=a;
	clrscr();
	cout<<"\na:"<<sum;
	sum=500;
	cout<<"\na:"<<a;
getch();
}
