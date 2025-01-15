#include<stdio.h>
#include<conio.h>
#define n 5
int s[n];
int top=-1;
void main()
{
	void push(int);
	int pop();
	void disp();
	int ch,data;
	do
	{
		clrscr();
		printf("\n1.Push");
		printf("\n2.Pop");
		printf("\n3.Display");
		printf("\n4.Exit");
		printf("\nEnter choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			printf("Enter new data:");
			scanf("%d",&data);
			push(data);
			break;

			case 2:
			data=pop();
			printf("\nThe popped element is %d:",data);
			break;

			case 3:
			disp();
			break;

			case 4:
			printf("Bye Bye");
			break;

			default:
			printf("Invalid input");
			break;
		}
		getch();
	}
		while(ch!=4);
}
		void push(int data)
		{
			if(top==n-1)
			{
				printf("Stack is overflow");
				return;
			}
			top++;
			s[top]=data;
		}
		int pop()
		{
			int data;
			if(top==-1)
			{
				printf("stack is underflow");
				return 0;
			}
			data=s[top];
			top--;
			return data;
		}

		void disp()
		{
			int i;
			if(top==-1)
			{
				printf("\nStack is empty");
				return;
			}
			printf("\nThe stack is \n");
			for(i=top;i>=0;i--)
			{
				printf("\n%d",s[i]);
			}
		}
