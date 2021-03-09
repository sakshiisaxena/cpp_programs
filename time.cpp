#include<iostream>
using namespace std;
class clock
{
	int h,m,s;
	public:
		void input();
		void output();
		friend istream & operator>>(istream &in, clock &t)
		{
			in>>t.h>>t.m>>t.s;
		}
		friend ostream & operator<<(ostream &out, clock &t)
		{
			out<<t.h<<t.m<<t.s;
		}
};

void clock::input()
{
	cout<<"enter time";
	cin>>h>>m>>s;
}
void clock::output()
{
	cout<<"time is ";
	cout<<h<<":"<<m<<":"<<s;
}
int main()
{
	clock ob;
	ob.input();
	ob.output();
	cin>>ob;
	cout<<ob;
}
