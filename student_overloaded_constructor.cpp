#include<iostream>
using namespace std;

class StudentMarks
{
	private:
		int reg_num;
		float sub1, sub2, sub3;
		float avg, total;
	public: 
		void input()
		{
			cout<<"\nEnter registration number of the student: ";
			cin>>reg_num;
			cout<<"\nEnter marks in subject 1(out of 100): ";
			cin>>sub1;
			cout<<"\nEnter marks in subject 2(out of 100): ";
			cin>>sub2;
			cout<<"\nEnter marks in subject 3(out of 100): ";
			cin>>sub3;
		}
		void average()
		{
			total=sub1+sub2+sub3;
			avg=total/3.0;
		}
		void display()
		{
			cout<<"\n\n*** DISPLAYING DETAILS ***";
			cout<<"\n\nREGISTRATION NUMBER: "<<reg_num;
			cout<<"\nMARKS IN SUBJECT 1: "<<sub1;
			cout<<"\nMARKS IN SUBJECT 2: "<<sub2;
			cout<<"\nMARKS IN SUBJECT 3: "<<sub3;
			cout<<"\nAVERAGE OF ALL THE THREE SUBJECTS: "<<avg;
		}
	StudentMarks()
	{
		reg_num=1;
		sub1=100;
		sub2=100;
		sub3=100;
	}
	StudentMarks(int reg_num, int sub1, int sub2, int sub3 )
	{
		reg_num=3;
		sub1=90;
		sub2=80;
		sub3=90;
	}
	StudentMarks(StudentMarks &s)
	{
		reg_num=s.reg_num;
		sub1=s.sub1;
		sub2=s.sub2;
		sub3=s.sub3;
	}
};
int main()
{
	StudentMarks s;
	s.input();
	s.average();
	s.display();
	return 0;
}
