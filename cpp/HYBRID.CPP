// hybrid inheritance

#include<iostream.h>
#include<conio.h>

//base class
class Person
{
	protected:
	char name;

	public:
	Person(const char & name):name(name)
	{
	}
	void display()
	{
	cout<<"\n Name:" << name;
	}
};
// Derived class1
class Employee: public Person
{
	protected:
	int employeeId;

	public:
	E	mployee(const char*&name,int id):Person(name),employeeId(id)
	{
	}
	void displayEmployee()
	{
		display();
		cout<<"Employee ID:"<<employeeId;
		cout<<"Method inside Derived class employee";
	}
};

//Derived class2
class Student:public Person
{
	protected:
	int studentId;

	public:
	Student(const char*&name,int id):Person(name),studentId(id)
	{
	}
	void displayStudent()
	{
		display();
		cout<<"Student ID:"<<studentId;
		cout<<"Method inside Derived Class Student";
	}
};

//derived class3
class StudentIntern: public Employee,public Student
{
	public:
	StudentIntern(const char*&name,int empId,int studId):Employee(name,empId),Student(name,studId)
	{
	}
	void displayStudentIntern()
	{
		cout<<"Method inside derived class" "studentIntern:";
		displayEmployee();
		displayStudent();
	}
};

//driver code
void main()
{
	clrscr();
	StudentIntern SI("Riya",67537,2215);
	SI.displayStudentIntern();

	getch();
}