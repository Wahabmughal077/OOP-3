#include<iostream>
#include<string>
using namespace std;
struct employee
{
	char name[1000];
	char age;
	char salary;
};
int main()
{
	employee emp[5];
	for(int i=1;i<=5;i++)
	{
//	cout<<"Enter information of employee "<<emp[i];
	cout<<"Enter employee name ";
	cin>>emp[i].name;
		cout<<"Enter employee age ";
	cin>>emp[i].age;
		cout<<"Enter employee salary ";
	cin>>emp[i].salary;
}
for(int i=1;i<=5;i++)
{
	cout<<"\n\t Displaying information of employee ";
	cout<<"Name: "<<emp[i].name<<endl;
	cout<<"Age: "<<emp[i].age<<endl;
	cout<<"Salary :"<<emp[i].salary<<endl;
	
}
}
