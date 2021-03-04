#include<iostream>
using namespace std;
class Shape
{
 	public:
		int area(int x,int y)
		{
			int rectangle;
			rectangle=x*y;	
		}
		float area(float r)
		{
			float pi=3.14;
			float circle;
			circle=pi*r*r;
		}
		int area(int s)
		{
		    int square;	
			square=s*s;
		}
		float area(int b, float h)
		{
		    float triangle;
		    float half=0.5;
		    triangle=(half*b*h);	
		}
};
int main()
{
	int length;
	int breadth;
	float radius;
	int side;
	int base;
	float height;
	int rectangle,square;
	float circle, triangle;
	cout<<"Enter the length of the rectangle:";
		cin>>length;
		cout<<"Enter the breadth of the rectangle:";
		cin>>breadth;
		cout<<"Enter the radius of the circle:";
		cin>>radius;
		cout<<"Enter the side of the square:";
		cin>>side;
		cout<<"Enter the base of the triangle:";
		cin>>base;
		cout<<"Enter the height of the triangle:";
		cin>>height;	

	Shape S;
	 rectangle=S.area(length ,breadth);
	 square=S.area(side);
	 triangle=S.area(base,height);
	 circle=S.area(radius);
     cout<<endl<<"The area of the rectangle is :"<<rectangle;
	 cout<<endl<<"The area of the circle is:"<<circle;
	 cout<<endl<<"The area of the square is:"<<square;
     cout<<endl<<"The area of the triangle is:"<<triangle;
}
