#include<iostream.h>
#include<conio.h>

class complex
{
	private:
	int real,imag;

	public:
	complex(int r=0,int i=0)
	{
		real=r;
		imag=i;
	}
	//this is automatically called
	//when '+' is used with between
	//two complex onjects

	complex operator+(complex const& obj)
	{
		complex res;
		res.real = real+obj.real;
		res.imag = imag+obj.imag;
		return res;
	}
	void print()
	{
		cout<<real<<"+i"<<imag;
	}
};

//driver code
void main()
{
	clrscr();
	complex c1(10, 5),c2(2, 4);

	//example call to "operator+"
	complex c3=c1+c2;
	c3.print();
	getch();
}