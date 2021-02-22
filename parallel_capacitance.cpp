#include<iostream>
using namespace std;

class capacitor
{
	float c[10],n,cp;
	int i;
	public:
		void parallel();
};

void capacitor::parallel()
{
	cout<<"enter number of capacitors"<<endl;
	cin>>n;
	cout<<"enter value of capacitor"<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<"C"<<i<<":";
		cin>>c[i];
	}
	cp=0;
	for(i=1;i<=n;i++)
	{
		cp=cp+c[i];
	}
	cout<<"equivalent parallel capacitance is:"<<cp<<"ohm"<<endl;
}

int main()
{
	capacitor c;
	c.parallel();
}
