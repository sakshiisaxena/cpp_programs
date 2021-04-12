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
			{
			cout<<"\ngot scholorship"<<endl;
			}
		}
			else
		{
			cout<<"\nnot eligible"<<endl;
		}
			
		}
};
class sports
{
 protected :
 	float ms;
 	public:
 	float marks_s();
 	sports()
 	{
 	ms=100;
	 cout<<"\nSports class default constructor called";	
	}
	sports(float x)
	{
		ms=x;
		cout<<"\nsports class parameterized constructor called.";
	}
	void input_s()
	{
		cout<<"\nMarks in sports :";
		cin>>ms;
	}
};
float sports :: marks_s()
{
	return ms;
}
class cultural
{
 protected :
 	float mc;
 	public:
 	float marks_c();
 	cultural()
 	{
 	mc=100;
	 cout<<"\ncultural class default constructor called";	
	}
	cultural(float y)
	{
		mc=y;
		cout<<"\ncultural class parameterized constructor called.";
	}
	input_c()
	{
	cout<<"\nMarks in cultural :";
	cin>>mc;		
	}
};
float cultural :: marks_c()
{
	return mc;
}	
class FinalResult : public Result , public sports , public cultural
{
public :
	FinalResult()
	{
		cout<<"\ndefault constructor called for final result.";
	}
	FinalResult(int rg,int a,int b,int c,float s,float cl):Result(rg,a,b,c), sports(s), cultural(cl)
	{
		cout<<"\nparameterized constructor called for final result ";
	}
float total_marks();
  void cal_grade();
  void cal_per();
   
};
float FinalResult :: total_marks()
  {
  	float t,t1,t2;
  	input_s();
  	input_c();
  	t1=marks_s();
  	t2=marks_c();
	t= m1+m2+m3+t1+t2;
	return t;
  }	
void FinalResult :: cal_grade()
{
    float g,t1,t2;
  	t1=marks_s();
  	t2=marks_c();
	g=t1+t2;
	if(g>=150)
	cout<<"\nGRADE IS : A";
	else if (g>=100&&g<=150)
	cout<<"\nGRADE IS : B";
	else if(g>=50 &&g<=100)
	cout<<"\nGRADE IS : C";
	else 
	cout<<"\nGRADE IS : D";
}
void FinalResult :: cal_per()
{
	float p,percentage;
	p=m1+m2+m3;
	percentage=(p/300.0)*100.0;
	cout<<"\npercentage is :"<<percentage;
	if(	percentage>=90)
	cout<<"\nDIVISION IS : A";
	else if (percentage>=75)
	cout<<"\nDIVISION IS : B";
	else if(percentage>=60)
	cout<<"\nDIVISION IS : C";
	else 
	cout<<"\nDIVISION IS : D";	
}
int main()
{
	int rg,a,b,c,min,merit;
	float x,y;
	cout<<"enter reg no and marks:";
	cin>>rg>>a>>b>>c;
	studentmarks obp(rg,a,b,c);
	obp.avg();
	cout<<"enter min and merit:";
	cin>>min>>merit;
	Result obpr(rg,a,b,c);
	obpr.result(min);
	obpr.result(min,merit);
	FinalResult f1(rg,a,b,c,x,y);
	cout<<"\nTotal marks in test, sports and culture = "<<f1.total_marks();
	f1.cal_grade();
	f1.cal_per();
	return 0;
}
