#include<conio.h>
#include<iostream.h>
class student
{
	protected:
		int rno;
	public:
		void set_rno()
		{
		      cout<<"\nEnter rno:";
		      cin>>rno;
		     // rno=i;
		}
};
class marks: virtual public student
{
	protected:
		int m1,m2;
	public:
		void set_marks()
		{
			cout<<"Enter m1:";
			cin>>m1;
			cout<<"Enter m2:";
			cin>>m2;

		}
};
class sports:virtual public student
{
	protected:
		char grade;
	public:
		void set_grade(char i)
		{
			grade=i;
		}
};
class result:public marks,public sports
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
			cout<<"\nGrade:"<<grade;
		}
};
void main()
{
	clrscr();
	result x;
	x.set_rno();
	x.set_marks();
	x.set_result();
	x.set_grade('A');
	x.disp();
	getch();
}