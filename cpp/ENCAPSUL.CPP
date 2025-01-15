#include<iostream.h>
#include<conio.h>

class person
{
	private:
	char name[10];
	int age;
	public:
	person(char name[10],int age)
	{
		this->name = name;
		this->age = age;
	}
	void setName(char name[10])
	{
		this->name = name;
	}
	char getName()
	{
		return name;
	}
	void setAge(int age)
	{
		this->age = age;
	}
	int getAge()
	{
		return age;
	}
};
void main()
{
	person Person("abc",23);
	cout<<"Name:"<<person.getName();
	count<<"Age:"<<person.getAge();

	person.setName("xyz");
	person.setAge(25);

	cout<<"Name:"<<person,getName();
	cout<<"Age:"<<person.getAge();

	getch();
}