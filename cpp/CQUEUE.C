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
		printf("\nEnter choice:");
		scanf("%d",&ch);

		switch(ch)
		{
			case 1:
			printf("Enter new data:");
			scanf("%d",&data);
			insert(data);
			break;

			case 2:
			data=del();
			printf("\nThe deleted element is %d:",data);
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
		void insert(int data)
		{
			if(r==n-1 && f==0 || f-r==1)
			{
				printf("queue is overflow");
				return;

			}

			if(r==-1)
				r=0;
			else
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
				printf("queue is underflow");

			}
			data=q[f];
			if(f==r)
			{
				f=r=-1;
			}
			else if(f==n-1)
				f=0;
			else
				f++;
			return data;
		}

		void disp()
		{
			int i;
			if(f==-1)
			{
				printf("\nQueue is empty");
				return;
			}
			printf("\nThe queue is \n");
			if(f<=r)
			{
				for(i=f;i<=r;i++)
				{
					printf("%5d",q[i]);
				}
			}
			else
			{
				for(i=f;i<=n-1;i++)
				{
					printf("%d",q[i]);
				}
				for(i=0;i<=r;i++)
				{
					printf("%5d",q[i]);
				}
			}
		}
