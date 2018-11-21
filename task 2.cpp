#include<iostream>
#include<cstring>
using namespace std;
struct student 
{
	char name[15];
	char id[15];
	char dep[20];
	char sem[5];
	char course[10];
	char marks[20];
};
struct course
{
	char id[10];
	char name[20];
	char marks[5];
};
int info()
{
	int n;
	student s;
	course c[6];
	cout<<"Enter student name ";
	cin>>s.name;
	cout<<"Enter student id ";
	cin>>s.id;
	cout<<"Enter student department ";
	cin>>s.dep;
	cout<<"Enter student semester ";
	cin>>s.sem;
	cout<<"Enter no of courses ";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<"Enter course name ";
		cin>>c[i].name;
		cout<<"Enter course id ";
		cin>>c[i].id;
		cout<<"Enter course marks ";
		cin>>c[i].marks;
	}
}

int main()
{
	info();
	
	
}
