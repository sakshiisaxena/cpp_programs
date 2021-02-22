#include<iostream>
using namespace std;

class capacitor
{
	float c[10],n,cs;
	int i;
	public:
		void series();
};

void capacitor::series()
{
	cout<<"enter number of capacitors"<<endl;
	cin>>n;
	cout<<"enter value of capacitor"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"C"<<i<<":";
		cin>>c[i];
	}
	cs=0;
	for(i=1;i<=n;i++)
	{
		cs=cs+(1.0/c[i]);
	}
	cs=1.0/cs;
	cout<<"equivalent series capacitance is:"<<cs<<"ohm"<<endl;
}

int main()
{
	capacitor c;
	c.series();
}
