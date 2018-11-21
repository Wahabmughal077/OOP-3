#include<iostream>
using namespace std;
struct employee
{
	char name[50];
	char date[50];
	char designation[50];
};
int main()
{
	employee emp1,emp2;
	cout<<"Enter employee name ";
	cin.getline(emp1.name, 50);
	cout<<"Enter date of joining ";
	cin.getline(emp1.date, 50);
	cout<<"Enter employee designation ";
	cin.getline(emp1.designation, 50);
	cout<<"Displaying information of employee 1 "<<endl;
	cout<<"Name: "<<emp1.name<<endl;
	cout<<"Date of joining "<<emp1.date<<endl;
	cout<<"Designation: "<<emp1.designation<<endl;

	cout<<"Enter employee name ";
	cin.getline(emp2.name, 50);
	cout<<"Enter date of joining ";
	cin.getline(emp2.date, 50);
	cout<<"Enter employee designation ";
	cin.getline(emp2.designation, 50);
	cout<<"Displaying information of employee 2 "<<endl;
	cout<<"Name: "<<emp2.name<<endl;
	cout<<"Date of joining "<<emp2.date<<endl;
	cout<<"Designation: "<<emp2.designation<<endl;
}
