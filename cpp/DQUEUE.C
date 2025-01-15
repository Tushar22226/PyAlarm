#include<stdio.h>
#include<conio.h>
#define n 5
int q[n];
int f=-1;
int r=-1;
void main()
{
	void insert(int);
	int del();
	void disp();
	int ch,data;
	do
	{
		clrscr();
		printf("\n1.Insert");
		printf("\n2.Delete");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter Choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			printf("\nEnter value:");
			scanf("%d",&data);
			insert(data);
			break;

			case 2:
			data=del();
			printf("The popped element is %d",data);
			break;

			case 3:
			disp();
			break;

			case 4:
			printf("The program is ended");
			break;

			default:
			printf("Invalid choice");
			break;
		}
		getch();
	}
	      while(ch!=4);
}
	void insert(int data)
	{
		if(r==n-1)
		{
			printf("Stack is overflow");
			return;
		}
		r++;
		q[r]=data;
		if(f==-1)
			f=0;

	}

	int del()
	{
		int data;
		if(f==-1)
		{
			printf("Stack is underflow");
			return 0;
		}
		data=q[f];
		if(f==r)
			f=r=-1;
		else
			f++;
		return data;
	}

	void disp()
	{
		int i;
		if(f==-1)
		{
			printf("Stack is empty");
			return;
		}
		printf("The stack is \n");
		for(i=f;i<=r;i++)
		{
			printf("\n%d",q[i]);
		}
	}