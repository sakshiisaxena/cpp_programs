#include <iostream>
using namespace std;

class rectangle
{
    int l, b, a, p;

    public:
        void area();
        void perimeter();
        void display();
        rectangle()
        {
            l = 1, b = 1;
            a = 1, p = 4;
        }
};

int main()
{
    rectangle obj;
    obj.area();
    obj.perimeter();
    obj.display();
}

void rectangle::area()
{
    cout<<"Enter length and breadth of rectangle";
    cin>>l>>b;
    a=l*b;
}

void rectangle::perimeter()
{
    p = 2*(l+b);
}

void rectangle::display()
{
    cout<<"area of rectangle is"<<a<<endl;
    cout<<"perimeter of rectangle is"<<p<<endl;    
}

