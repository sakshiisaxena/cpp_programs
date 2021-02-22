#include<iostream>
using namespace std;
class Shape
{
	int s,l,b;
	float h,r;

	public:
		void area(int l, int b);
		void area(float r);
		void area(int s);
		void area(int b, float h);
		Shape()
		{
			l=0,b=0;
		}
};

void Shape::area(int l, int b)
	{
		int rectangle;
		rectangle = l*b;
		cout<<"area of rectangle is = "<<rectangle<<endl;
	
	}
void Shape::area(float r)
	{
		float circle;
		circle = 3.14*r*r;
	    cout<<"area of circle is = "<<circle<<endl;
		
	}
void Shape::area(int s)
	{
		int square;
		square = s*s;
	    cout<<"area of square is = "<<square<<endl;
		
	}
void Shape::area(int b, float h)
	{
		float triangle;
		triangle = 0.5*b*h;
		cout<<"area of triangle is = "<<triangle<<endl;
	
	}

int main()
{
	int length,breadth,side;
	float radius,height;
	cout<<"enter length of rectangle"<<endl;
	cin>>length;
	cout<<"enter breadth of rectangle"<<endl;
	cin>>breadth;
	cout<<"enter side of square"<<endl;
	cin>>side;
	cout<<"enter radius of circle"<<endl;
	cin>>radius;
	cout<<"enter height of triangle"<<endl;
	cin>>height;
	
	Shape s;
	 s.area(length,breadth);
	 s.area(radius);
	 s.area(side);
	 s.area(breadth,height);
	
}

