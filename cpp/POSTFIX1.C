#include<stdio.h>
#include<string.h>
#include<conio.h>
#define size 30
char infix[size],opt_stack[size],opd_stack[size];
int opt_top = -1,opd_top= -1;
int precedence(char ch)
{
	if(ch=='^')
		return 3;
	else if(ch=='*')
		return 2;
	else if(ch=='+'|| ch=='-')
		return 1;
	else
		return -1;
}
void main()
{
	int precedence(char);
	int len,i;
	char ch;
	printf("\n enter infix expression:");
	gets(infix);
	len=strlen(infix);
	for(i=0;i<len;i++)
	{
		ch=infix[i];
		switch(ch)
		{
			case'(':
			opt_stack[++opt_top]=ch;
			break;

			case')':
			while(opt_stack[opt_top]!='(')
			{
				opd_stack[++opd_top]=opt_stack[opt_top--];
			}
			opt_top--;
			break;

			case'+':
			case'-':
			case'*':
			case'^':
			case'/':
				while(precedence(opt_stack[opt_top])>=precedence(ch)&&opt_top!=-1)
				{
					opd_stack[++opd_top]=opt_stack[opt_top--];
				}
				opt_stack[++opt_top]=ch;
				break;
			default:
				opd_stack[++opd_top]=ch;
				break;
		}
		
		while(opd_top!=-1)
		{
			opd_stack[++opd_top]=opt_stack[opt_top--];
		}
		for(i=0;i<=opd_top;i++)
		{
			printf("%c", opd_stack[i]);
		}
		getch();
	} 
	



