#include<iostream.h>
#include<conio.h>

class sum_and_mul
{
	public:
	int c=10;
	public:
	void sum_1(int a,int b)
	{
		int result;
		result a+c;
		cout<<"The result for sum of a and c is:"<<result;
	}
	void mul_1(int a,int b)
	{
		int result;
		result a*c;
		cout<<"The result for multiplication of a and c is:"<<result;
	}
};
class mul_and_sum:public sum_and_mul
{
	int d=20;
	public:
	void sum_2()
	{
		int result;
		result=c+d;
		cout<<"The result for sum of c and d is:"<<result;
	}
	void mul_2()
	{
		int result;
		result=c*d;
		cout<<"The result for multiplication of c and d is:"<<result;
	}
};

void main()
{
	clrscr();
	int a,b;
	cout<<"Enter value for a:";
	cin>>a;

	cout<<"Enter value for b:";
	cin>>b;

	sum_and_mul Sam;
	mul_and_sum Mas;
	Sam.sum_1(a,b);
	Sam.mul_1(a,b);
	Mas.sum_1(a,b);
	Mas.mul_1(a,b);
	Mas.sum_2();
	Mas.mul_2();

	getch();
}