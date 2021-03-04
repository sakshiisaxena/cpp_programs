//WAP to find the prime numbers between a given range.

#include<iostream>
using namespace std;
class primenumber
{
	int l,u;
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
	cin>>l>>u;
	if(l<0||u<0)
	{
		cout<<"Invalid Input..enter positive no";
	}
}

void primenumber::calprime()
{
	int i,j;
	bool f;
	for(i=l;i<=u;i++)
	{
		f=false;
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			{
				f=true;
				break;
			}
		}
		if(f==false)
		{
			cout<<"\n"<<i;
		}
	}
}
