#include<iostream>
using namespace std;
struct student
{
	char name[20];
	char gender[10];
	int roll_no;
	float marks[5];
	void input();
	void output();
}s[10];

void student::input()
{
	int i,j,n;
	cout<<"\nEnter the name \n";
	cin>>name;
	cout<<"\nEnter the roll no\n";
	cin>>roll_no;
	cout<<"\nenter the gender\n";
	cin>>gender;
	cout<<"\nenter marks of 5 subjects\n";
	for(j=0;j<5;j++)
	{
		cin>>marks[j];
	}
    
}
void student::output()
{
	int i,j,n;
	cout<<"\nstudent name:\n";
	cout<<name;
	cout<<"\nstudent roll no:\n";
	cout<<roll_no;
	cout<<"\nstudent gender:\n";
	cout<<gender;
	cout<<"\nmarks:\n";
	for(j=0;j<5;j++)
	{
		cout<<marks[j];
	}
	
}
int main()
{
	int i, n, j;
	cout<<"\nEnter number of students data you want to enter:\n";
	cin>>n;
	cout<<"Enter information of students:\n";
	for(i=0;i<n;i++)
	{
		cout<<"\nfor student number";
		cout<<i+1<<endl;
		s[i].input();
		
	}
	for(i=0;i<n;i++)
	{
		cout<<"\ndisplaying information for student";
		cout<<i+1<<endl;
		s[i].output();
    }
	return 0;
}
