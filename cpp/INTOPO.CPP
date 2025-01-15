#include<stdio.h>
#include<conio.h>
#include<string.h>
char s[100];
int top=-1;
void push(char data)
{
	top++;
	s[top]=data;
}
char pop()
{

	char data=s[top];
	top--;
	return data;
}
void main()
{
	char infix[100],postfix[100];
	int i,j=0,l;
	clrscr();
	printf("Enter infix expression:");
	gets(infix);
	l=strlen(infix);
	for(i=0;i<l;i++)
	{
		switch(infix[i])
		{
			case '(':
			push(infix[i]);
			break;

			case ')':
			while(s[top]!='(')
			postfix[j++]=pop();
			pop();
			break;

			case '^':
			while(s[top]=='^')
			   postfix[j++]=pop();
			push(infix[i]);
			break;

			case '*':
			case '/':
			while(s[top]=='^' || s[top]=='*' || s[top]=='/')
			   postfix[j++]=pop();
			push(infix[i]);
			break;

			case '+':
			case '-':
			while(s[top]=='^' || s[top]=='*' || s[top]=='/' || s[top]=='+' || s[top]=='-')
			   postfix[j++]=pop();
			push(infix[i]);
			break;

			default:
				postfix[j++]=infix[i];
			}
		}
		while(top>=0)
			postfix[j++]=pop();
		postfix[j]='\0';
		printf("\nThe postfix exp is %s",postfix);
		getch();
}



