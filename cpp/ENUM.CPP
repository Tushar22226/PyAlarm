#include<iostream.h>
#include<conio.h>

void main()
{
	clrscr();
	enum Gender{Male,Female};
	Gender gender = Female;
	switch	(gender)
	{
		case Male:
		cout<<"Gender is Male";
		break;

		case Female:
		cout<<"Gender is Female";
		break;

		default:
		cout<<"Value can be Male or Female";
	}
	getch();
}
