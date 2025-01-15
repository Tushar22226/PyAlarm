#include<iostream.h>
#include<conio.h>

//it is static so that every class object has the same value

static int count=0;
class test
{
	public:
	//user-defined constructor
	test()
	{
		//number of times constructor is called
		count++;
		cout<<"\n No. of object created:"<<count;
	}

	//user-defined destructor
	~test()
	{
		//it will print count in decending order
		cout<<"\n No. of object destroyed:"<<count;
		count--;
		//number of times destructor is called
	}
};
//driver code
void main()
{
       //	clrscr();
	test t,t1,t2,t3;
	getch();
}