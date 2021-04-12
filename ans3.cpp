#include<iostream>
using namespace std;
class Distance
{
	float kilometers, meters;
	public:
	Distance()
	{
		kilometers=0;
		meters=0;
	}
	Distance operator ++(int)
	{
		Distance temp;
		temp.kilometers=kilometers++;
		temp.meters=meters++;
		return temp;
	}
	friend Distance operator +=(Distance& , Distance);
	friend istream & operator >> (istream &, Distance &);
	friend ostream & operator << (ostream &, const Distance &);
	Distance operator +(Distance d)
	{
		Distance temp;
		temp.kilometers=kilometers+d.kilometers;
		temp.meters=meters+d.meters;
		return temp;
	}
};
istream & operator >> (istream &in, Distance &d)
{
	cout<<"Kilometers: ";
	in>>d.kilometers;
	cout<<"Meters: ";
	in>>d.meters;
	return in;
}
ostream & operator << (ostream &o, const Distance &d)
{
	o<<d.kilometers<<" . "<<d.meters;
	return o;
}
Distance operator +=(Distance &obj1, Distance obj2)
	{
		obj1.kilometers+=obj2.kilometers;
		obj1.meters+=obj2.meters;
	}
int main()
{ 
	Distance d1,d2,d3;
	cout<<"Enter first distance:: "<<endl;
	cin>>d1;
	cout<<"Enter second distance: "<<endl;
	cin>>d2;
	cout<<"Enter third distance: "<<endl;
	cin>>d3;
	d1+=d2+d3++;
	cout<<d1;
	return 0;
	
}
