#include<conio.h>
#include<iostream.h>
class student
{
	protected:
		int rno;
	public:
		void set_rno(int i)
		{
			rno=i;
		}
};
class marks:public student
{
	protected:
		int m1,m2;
	public:
		void set_marks(int i,int j)
		{
			m1=i;
			m2=j;
		}
};
class result:public marks
{
	protected:
		int tot,per;
	public:
		void set_result()
		{
			tot=m1+m2;
			per=tot/2;
		}
		void disp()
		{
			cout<<"\nRno:"<<rno;
			cout<<"\nM1:"<<m1;
			cout<<"\nM2:"<<m2;
			cout<<"\nTot:"<<tot;
			cout<<"\nPer:"<<per;
		}
};
void main()
{
	clrscr();
	result x;
	x.set_rno(1);
	x.set_marks(45,67);
	x.set_result();
	x.disp();
	getch();
}