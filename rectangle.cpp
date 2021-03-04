#include<iostream>
using namespace std;

class Rectangle{

		float length, width, thelength, thewidth, a, p;
	public:
		rectangle()
		{
			setlength(1.0);
			setwidth(1.0);
		}
		rectangle(float thelength, float thewidth)
		{
			setlength(thelength);
			setwidth(thewidth);
		}
		void setlength(float thelength);
		void setwidth(float thewidth);
		int getlength();
		int getwidth();
		void area();
		void perimeter();
		void display();
};
void Rectangle::setlength(float thelength)
{
	length = ( thelength > 0.0 && thelength < 20.0 ? thelength : 1.0 );	
}
void Rectangle::setwidth(float thewidth)
{
	width = ( thewidth > 0 && thewidth < 20.0 ? thewidth : 1.0 );
}
int Rectangle::getlength()
{
	return length;
}
int Rectangle::getwidth()
{
	return width;
}
void Rectangle::area()
{
	a=length*width;
}
void Rectangle::perimeter()
{
	p=(2*(length+width));
}
void Rectangle::display()
{
	cout<<"\nThe length of the rectangle is: "<<length;
	cout<<"\nThe width of the rectangle is: "<<width<<endl;
	cout<<"\nArea of rectangle: "<<a;
	cout<<"\nPerimeter of rectangle: "<<p;
}
int main()
{
	float thelength, thewidth;
	Rectangle r;
	cout<<"\nEnter length and width of rectangle:"<<endl;
	cin>>thelength>>thewidth;
	r.setlength(thelength);
	r.setwidth(thewidth);
	r.getlength();
	r.getwidth();
	r.area();
	r.perimeter();
	r.display();
	return 0;
}

