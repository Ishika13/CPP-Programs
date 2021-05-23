/* C++ Inheritance - Example Program */
using namespace std;
#include<iostream>
class EMPLOYEE
{
	private:
		char name[30];
		unsigned long enumb;
	public:
		void getdata()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter Employee Number: ";
			cin>>enumb;
			cout<<endl;
		}
		void putdata()
		{
			cout<<"Name: "<<name<<"\t";
			cout<<"Emp. No: "<<enumb<<"\t";
			cout<<"Basic Salary: "<<basic;
		}
	protected:
		float basic;
		void getbasic()
		{
			cout<<"Enter Basic: ";
			cin>>basic;
		}
};
class MANAGER:public EMPLOYEE
{
	private:
		char title[30];
	public:
		void getdata()
		{
			EMPLOYEE::getdata();
				getbasic();
				cout<<"Enter title:";
				cin>>title;
		}
		void putdata()
		{
			EMPLOYEE::putdata();
			cout<<"     Title:  "<<title<<"\t";
			
		}
};
int main()
{

	MANAGER m1, m2;
	cout<<"Manager 1\n";
	m1.getdata();
	cout<<"\nManager 2\n";
	m2.getdata();
	cout<<"\n\t\tManager 1 Details\n";
	m1.putdata();
	cout<<"\n\t\tManager 2 Details\n";
	m2.putdata();
return 0;
}
