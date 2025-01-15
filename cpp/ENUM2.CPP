#include<iostream.h>
#include<conio.h>
enum year
{
	Jan,Feb,Mar,Apr,May,Jun,Jul,Aug,Sep,Oct,Nov,Dec
};
void main()
{
	clrscr();
	int i;
	for(i=Jan;i<=Dec;i++)
	cout<<i<<" ";
	getch();
}