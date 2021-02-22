#include<iostream>
using namespace std;

class resistor
{
	float r[10],n,rs;
	int i;
	public:
		void series();
};

void resistor::series()
{
	cout<<"enter number of resistors"<<endl;
	cin>>n;
	cout<<"enter value of resistor"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"R"<<i<<":";
		cin>>r[i];
	}
	rs=0;
	for(i=1;i<=n;i++)
	{
		rs=rs+r[i];
	}
	cout<<"equivalent series resistance is:"<<rs<<"ohm"<<endl;
}

int main()
{
	resistor r;
	r.series();
}
