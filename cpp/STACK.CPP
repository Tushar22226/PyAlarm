#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define size 5
struct stack
{
	int a[size];
	int top;
}s1;
void push()
{
	int item;
	printf("\n enter an item:");
	scanf("%d",&item);
	if(s1.top>=size-1)
	{
		printf("\n stack overflow");
		return;
	}
	s1.top=s1.top+1;
	s1.a[s1.top]=item;
	return;
}
int pop()
{
	int rem_item;
	if(s1.top==-1)
	{
		printf("\n stack underflow");
		return 0;
	}
	rem_item=s1.a[s1.top--];
	return rem_item;
}
int peep()
{
	int i,item;
	printf("\n enter index number:");
	scanf("%d", &i);
	if((i<=0) || (s1.top-i+1<0))
	{
		printf("\n invalid location number");
		return 0;
	}
	item=s1.a[s1.top-i+1];
	return item;
}
void disp()
{
	int i
	printf("\nstack is:\n");
	for(i=s1.top;i>=0;i--)
		printf("\n| %d |\n ---",s1.a[i]);
}
main()
{
	int ch,ele;
	s1.top=-1;
	do
	{
		clrscr();
		printf("\n main menu");
		printf("\n 1.push");
		printf("\n 2.pop");
		printf("\n 3.peep");
		printf("\n 4. display");
		printf("\n 5. exit");
		printf("\n enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push();
				break;
			case 2:
				ele=pop();
				printf("\n deleted item:%d",ele);
				break;
			case 3:
				ele=peep();
				printf("\n extracted item:%d",ele);
				break;
			case 4:
				disp();
				break;
			case 5:
				exit(0);
			default:
				printf("\n invalid choice");
		}
		printf("\n press any key to continue...");
		getch();
	}while(1);
}

