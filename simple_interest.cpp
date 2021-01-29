//Calculate simple interest.

#include<iostream>
using namespace std;
class simpleInterest
{
	int p,r,t,s;
	public:
		void input();
		void calSimpleInterest();
};

void simpleInterest::input()
{
	cout<<"enter P,R,T: ";
	cin>>p>>r>>t;
}

void simpleInterest::calSimpleInterest()
{
	s=p*r*t/100;
	cout<<"Simple interest is:";
	cout<<s;
}

int main()
{
	simpleInterest obj;
	obj.input();
	obj.calSimpleInterest();
	return 0;
}
