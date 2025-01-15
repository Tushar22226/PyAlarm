#include<iostream.h>
#include<conio.h>

class shape
{
	public:
	virtual void draw() = 0;
};
class circle:public shape
{
	public:
	circle(int radius):radius(radius)
	{
	}
	void draw()
	{
		cout<<"\n Drawing a circle with radius"<<radius;
	}
	private:
	int radius;
};
class rectangle:public shape
{
	public:
	rectangle(int width,int height):width(width),height(height)
	{
	}
	void draw()
	{
		cout<<"\n Drawing a rectangle with width:"<<width<<"and \n height"<<height;
	}
	private:
	int width;
	int height;
};
void main()
{
	clrscr();
	circle circle(5);
	rectangle rectangle(10,20);
	circle.draw();
	rectangle.draw();

	getch();
}