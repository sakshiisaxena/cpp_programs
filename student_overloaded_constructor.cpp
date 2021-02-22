#include<iostream>
using namespace std;
class student_marks
{
	int r,sub1, sub2, sub3;
	
	public:
		void input();
		void avg();
		void display();
		
	student_marks()
	{
		r=0;
		sub1=0, sub2=0, sub3=0;
	}		
};

void student_marks::input()
{
	cout<<"enter marks"<<endl;
	cin>>sub1>>sub2>>sub3;
}

void student_marks::avg()
{
	float a;
	a = (sub1+sub2+sub3)/3;
	cout<<"average is:"<<a<<endl;
}

void student_marks::display()
{
	cout<<"marks of three subject are:"<<endl;
	cout<<sub1<<endl<<sub2<<endl<<sub3<<endl;
}

int main()
{
	student_marks s;
	s.input();
	s.avg();
	s.display();
}
