#include<iostream>
using namespace std;

class resistor
{
	float r[10],n,rp;
	int i;
	public:
		void parallel();
};

void resistor::parallel()
{
	cout<<"enter number of resistors"<<endl;
	cin>>n;
	cout<<"enter value of resistor"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"R"<<i<<":";
		cin>>r[i];
	}
	rp=0;
	for(i=1;i<=n;i++)
	{
		rp=rp+(1.0/r[i]);
	}
	rp=1.0/rp;
	cout<<"equivalent parallel resistance is:"<<rp<<"ohm"<<endl;
}

int main()
{
	resistor r;
	r.parallel();
}
