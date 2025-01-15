#include<iostream.h>
#include<conio.h>

void area(int l=0,int b=0)
{
	if(l==0 && b==0)
		cout<<"\nNo Area";
	else if(b==0)
		cout<<"\nArea of Square is:"<<l*l;
	else
		cout<<"\nArea of Rectangle is:"<<l*b;
}
void main()
{
	int a,b;
	clrscr();
	cout<<"Enter a:";
	cin>>a;
	cout<<"Enter b:";
	cin>>b;
	area();
	area(a);
	area(a,b);
	getch();

}