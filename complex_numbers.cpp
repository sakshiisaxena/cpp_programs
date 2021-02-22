#include<iostream>
#include<math.h>
using namespace std;

class Complex{

    int real;
    int img;
    int x,y;
    
    public:
    void setvalue();
    void display();
    void sum(Complex c1, Complex c2);
    void sub(Complex c1, Complex c2);
    void mul(Complex c1, Complex c2);
    void div(Complex c1, Complex c2);
    Complex()
    {
    	real = 1;
    	img = 1;
	}
 };
 
void Complex::setvalue() 
    {
        cin>>real;
        cin>>img;
    } 
    
void Complex::display()
    {
        cout<<real<<"+"<<img<<"i"<<endl;
		
    } 
    
void Complex::sum(Complex c1, Complex c2)
    {
        real=c1.real+c2.real;
        img=c1.img+c2.img;
        if ( img >= 0 )
      cout << "Sum = " << real << " + " << img << "i"<<endl;
      else
      cout << "Sum = " << real << " - " << img << "i"<<endl;
    }
	
void Complex::sub(Complex c1, Complex c2)
    {
        real=c1.real-c2.real;
        img=c1.img-c2.img;
         if ( img >= 0 )
      cout << "Sub = " << real << " + " << img << "i"<<endl;
   else
      cout << "Sub = " << real << img << "i"<<endl;
    }
	
void Complex::mul(Complex c1, Complex c2)
    {
       x = (c1.real * c2.real)- (c1.img * c2.img);
       y = (c1.real * c2.real)+ (c1.img * c2.img);
       cout<<"Multiplication = "<<x<<"+"<<y<<"i"<<endl;
    }
	
void Complex::div(Complex c1, Complex c2)
    {
     x =(((c1.real)*(c2.real))+((c1.img)*(c2.img)))/(pow(c2.real,2)+pow(c2.img,2));
     y =(((c2.real)*(c1.img))-((c1.real)*(c2.img)))/(pow(c2.real,2)+pow(c2.img,2));
     cout<<"Division = "<<x<<"+"<<y<<"i"<<endl;
    }			    
	   
int main()
    {
        Complex c1,c2,c3;
        cout<<"Enter real and imaginary part of first complex number"<<endl;
        c1.setvalue();
        cout<<"Enter real and imaginary part of second complex number"<<endl;
        c2.setvalue();
        
        cout<<"The first number entered is"<<endl;
		c1.display();
		cout<<"The second number entered is"<<endl;
		c2.display();

        c3.sum(c1,c2);
        c3.sub(c1,c2);
        c3.mul(c1,c2);
        c3.div(c1,c2);

    }
