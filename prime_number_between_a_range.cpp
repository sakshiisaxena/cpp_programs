//WAP to find the prime numbers between a given range.

#include<iostream>
using namespace std;
class primenumber
{
	int l1,u1;
	public:
		void input();
		void calprime();
};
int main()
{
	primenumber obj;
	obj.input();
	obj.calprime();
	return 0;
}

void primenumber::input()
{
	cout<<"Enter lower & upper limit";
	cin>>l1>>u1;
	if(l1<0||u1<0)
	{
		cout<<"Invalid Input..enter positive no";
	}
}

void primenumber::calprime()
{
	int i,j;
	bool flag;
	for(i=l1;i<=u1;i++)
	{
		flag=false;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				flag=true;
				break;
			}
		}
		if(flag==false)
		{
			cout<<"\n"<<i;
		}
	}
}
