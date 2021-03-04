#include<iostream>
using namespace std;
int swap(int, int);
int swap(double,double);
int swap(char, char);
		int swap(int ix,int iy)
		{
			cout<<"Enter 2 integers: "<<endl;
			cin>>ix>>iy;
			cout<<"Before Swapping: "<<endl;
			cout<<"ix="<<ix<<"\niy="<<iy<<endl;
			int temp;;
			temp=ix;
			ix=iy;
			iy=temp;
			cout<<"\nAfter Swapping:"<<endl;
			cout<<"ix="<<ix<<"\niy="<<iy;
			return 1;
		}
		
		int swap(char cx,char cy)
		{
			cout<<"\n\nEnter 2 characters: "<<endl;
			cin>>cx>>cy;
			cout<<"Before Swapping: "<<endl;
			cout<<"cx="<<cx<<"\ncy="<<cy<<endl;
			char temp;
			temp=cx;
			cx=cy;
			cy=temp;
			cout<<"\nAfter Swapping: "<<endl;
			cout<<"cx="<<cx<<"\ncy="<<cy;
			return 1;
		}
		
		int swap(double fx,double fy)
		{
			cout<<"\n\nEnter 2 real nos.: "<<endl;
			cin>>fx>>fy;
			cout<<"Before Swapping: "<<endl;
			cout<<"fx="<<fx<<"\nfy="<<fy<<endl;
			float temp;
			temp=fx;
			fx=fy;
			fy=temp;
			cout<<"\nAfter Swapping: "<<endl;
			cout<<"fx="<<fx<<"\nfy="<<fy;
			return 1;
		}

int main()
{
	int ix, iy;
	char cx, cy;
	double fx, fy;
	swap(1,2);
	swap('a','b');
	swap(2.5,5.0);
	return 0;
}


