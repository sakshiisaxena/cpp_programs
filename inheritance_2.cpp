#include<iostream>
using namespace std;
class studentmarks
{
	protected:
	int reg_no;
	int m1,m2,m3;

	public:
		studentmarks()
		{
			cout<<"\n default constructor for studentmarks class"<<endl;
			reg_no=1;
			m1=100;
			m2=100;
			m3=100;
		}
		studentmarks(int rg,int a,int b,int c)
		{
			cout<<"\n parameterized constructor for studentmarks class"<<endl;
			reg_no=rg;
			m1=a;
			m2=b;
			m3=c;
		}
		void get()
		{
			cout<<"enter reg no and marks for 3 sub"<<endl;
			cin>>reg_no>>m1>>m2>>m3;
		}
		float avg()
		{
			float av;
			cout<<"average is";
			av=(m1+m2+m3)/3.0;
			cout<<av<<endl;
			return av;
		}
		
};
class Result:public studentmarks
{
	

	public:
	Result()
	{
		cout<<"\n default constructor for Result class";
	
	}
	Result(int rg,int a,int b,int c):studentmarks(rg,a,b,c)
	{
		cout<<"\n parameterized constructor for Result class";
		
	}
	void result(int min)
	{
		if(m1>=min&&m2>=min&&m3>=min)
		{
		cout<<"\npass"<<endl;
	
		}
		else
		{
	cout<<"\nfail"<<endl;
          
		}
	}
	void result(int min,int merit)
	{
		float a;
		a = avg();
	
		if(m1>=min&&m2>=min&&m3>=min)
		{
			
			if(a >= merit)
			cout<<"\ngot scholorship"<<endl;
			
			else
		{
			cout<<"\nnot eligible"<<endl;
		}
			
		}
		
	}
	
};
int main()
{
	int rg,a,b,c,min,merit;

/*	studentmarks ob1;
	ob1.get();
	ob1.avg();*/
	cout<<"enter reg no and marks:";
	cin>>rg>>a>>b>>c;
	studentmarks obp(rg,a,b,c);
	obp.avg();
	cout<<"enter min and merit:";
	cin>>min>>merit;
	Result obpr(rg,a,b,c);
	obpr.result(min);
	obpr.result(min,merit);
	return 0;
}
