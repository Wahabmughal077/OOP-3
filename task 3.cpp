#include<iostream>
using namespace std;
struct dist
{
	float inches;
	int feet;
};
int main()
{
	dist d1,d2;
	float suminches,met;
	int sumfeet;
	cout<<"Enter the ist value feet of distance ";
	cin>>d1.feet; 
	cout<<"Enter the ist  value inches of distance ";
	cin>>d1.inches;
		cout<<"Enter the 2nd  value feet of distance ";
	cin>>d2.feet; 
	cout<<"Enter the 2nd value inches of distance ";
	cin>>d2.inches;
	sumfeet=d1.feet+d2.feet;
	suminches=d1.inches+d2.inches;
	for(int i=suminches+1;i>=suminches;i--)
	{
		if(suminches>12)
		{
			sumfeet=sumfeet+1;
			suminches=suminches-12;
		}
	}
met=sumfeet*0.3084;
cout<<endl<<"Length after conversion = "<<met;

}
