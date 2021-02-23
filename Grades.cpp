#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"\nEnter the marks received out of 100: ";
	cin>>marks;
	if(marks==100)
	{
		cout<<"\nGrade S";
	}
	else if(marks>=90&&marks<100)
	{
		cout<<"\nGrade A";
	}
	else if(marks>=80&&marks<90)
	{
		cout<<"\nGrade B";
	}
	else if(marks>=70&&marks<80)
	{
		cout<<"\nGrade C";
	}
	else if(marks>=60&&marks<70)
	{
		cout<<"\nGrade D";
	}
	else if(marks>=50&&marks<60)
	{
		cout<<"\nGrade E";
	}
	else if(marks<50)
	{
		cout<<"\nFail";
	}
	else
	{
		cout<<"\nInvalid input";
	}
	return 0;
}
