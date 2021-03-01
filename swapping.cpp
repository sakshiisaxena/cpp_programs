#include<iostream>
using namespace std;
int swap(int, int);
int swap(double,double);
int swap(char, char);
class SWAP
{
	public:
		void swap(int &ix,int &iy)
		{
			int temp;;
			temp=ix;
			ix=iy;
			iy=temp;
		}
		void swap(double &fx,double &fy)
		{
			float temp;
			temp=fx;
			fx=fy;
			fy=temp;
		}
		void swap(char &cx,char &cy)
		{
			char temp;
			temp=cx;
			cx=cy;
			cy=temp;
		}
};

int main()
{
	SWAP s1, s2, s3;
	int ix, iy;
	double fx, fy;
	char cx, cy;
	cout<<"Enter 2 integers: "<<endl;
	cin>>ix>>iy;
	cout<<"Before Swapping: "<<endl;
	cout<<"ix="<<ix<<"\niy="<<iy<<endl;
	s1.swap(ix,iy);
	cout<<"\nAfter Swapping:"<<endl;
	cout<<"ix="<<ix<<"\niy="<<iy;
	cout<<"\n\nEnter 2 floating point no:s: "<<endl;
	cin>>fx>>fy;
	cout<<"Before Swapping: "<<endl;
	cout<<"fx="<<fx<<"\nfy="<<fy<<endl;
	s2.swap(fx,fy);
	cout<<"\nAfter Swapping: "<<endl;
	cout<<"fx="<<fx<<"\nfy="<<fy;
	cout<<"\n\nEnter 2 characters: "<<endl;
	cin>>cx>>cy;
	cout<<"Before Swapping: "<<endl;
	cout<<"cx="<<cx<<"\ncy="<<cy<<endl;
	s3.swap(cx,cy);
	cout<<"\nAfter Swapping: "<<endl;
	cout<<"cx="<<cx<<"\ncy="<<cy;
	return 0;
}
