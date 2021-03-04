#include<iostream>
#include<math.h>
using namespace std;
class Complex
{
	float real;
	float imag;
	public:
		void input()
		{
			cout<<"Enter the real part: "<<endl;
			cin>>real;
			cout<<"Enter the imaginary part: "<<endl;
			cin>>imag;
			cout<<"\nThe complex number is: "<<endl;
			if(imag>0)
			{
				cout<<"("<<real<<")"<<"+"<<"("<<imag<<"i"<<")"<<endl;
			}
			else if(imag<0)
			{
				int temp=imag;
				temp=-temp;
				cout<<"("<<real<<")"<<"+"<<"("<<imag<<"i"<<")"<<endl;
			}
			else
			{
				cout<<"("<<real<<")"<<"+"<<"("<<imag<<"i"<<")"<<endl;
			}
			
		}
		void add(Complex c1, Complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
			
		}
		void sub(Complex c1, Complex c2)
		{
			real=c1.real-c2.real;
			imag=c1.imag-c2.imag;
			
		}
		void mult(Complex c1, Complex c2)
		{
			real=((c1.real*c2.real)-(c1.imag*c2.imag));
			imag=((c1.imag*c2.real)+(c1.real*c2.imag));
			
		}
		void div(Complex c1, Complex c2)
		{
			real=(((c1.real)*(c2.real))+((c1.imag)*(c2.imag)))/(pow(c2.real,2)+pow(c2.imag,2));
			imag=(((c2.real)*(c1.imag))-((c1.real)*(c2.imag)))/(pow(c2.real,2)+pow(c2.imag,2));
			
		}
		void display()
		{
				if(imag>0)
				{
					cout<<"("<<real<<")"<<"+"<<"("<<imag<<"i"<<")"<<endl;
				}
				else if(imag<0)
				{
					imag=-imag;
					cout<<"("<<real<<")"<<"-"<<"("<<imag<<"i"<<")"<<endl;
				}
				else
				{
					cout<<"("<<real<<")"<<"-"<<"("<<imag<<"i"<<")"<<endl;
				}
		}
		Complex()
		{
			real=1;
			imag=1;
		}
};
int main()
{
	Complex c1, c2, c3, c4, c5, c6;
	Complex *ptr1, *ptr2, *ptr3, *ptr4, *ptr5, *ptr6;
	cout<<"Enter first complex number.\n "<<endl;
	ptr1=&c1;
	ptr1->input();
	cout<<"\nEnter second complex number. "<<endl;
	ptr2=&c2;
	ptr2->input();
	cout<<"\nThe addition is: "<<endl;
	ptr3=&c3;
	ptr3->add(c1,c2);
	ptr3->display();
	cout<<"\nThe subtraction is: "<<endl;	
	ptr4=&c4;
	ptr4->sub(c1,c2);
	ptr4->display();
	cout<<"\nThe multiplication is: "<<endl;
	ptr5=&c5;
	ptr5->mult(c1,c2);
	ptr5->display();
	cout<<"\nThe division is:"<<endl;
	ptr6=&c6;
	ptr6->div(c1,c2);
	ptr6->display();
	
}

