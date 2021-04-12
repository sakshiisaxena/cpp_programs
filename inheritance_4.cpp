#include<iostream>
#include<math.h>
using namespace std;
class intrest
{
	protected:
		float rate,principal,time,pamount,i;
		public:	
		virtual void cal_intrest()=0;	
		intrest()
		{
			rate=0;
			principal=0;
			time=0;
			pamount=0;
			i=0;
		}
			void get()
		{
			cout<<"enter p,r,t"<<endl;
			cin>>principal>>rate>>time;
		}
};
class si:public intrest
{
	public:
	
		void cal_intrest()
		{
			i=(principal*rate*time)/100;
			cout<<"SI="<<i<<endl;
		}
};
class ci:public intrest
{
	public:
		void cal_intrest()
		{
			
			i=principal*(pow((1+rate/100),time));
			cout<<"CI="<<i<<endl;
		}
};
int main()
{
	si s;
	ci c;
	intrest* ptr;
	ptr=&s;
	ptr->get();
	ptr->cal_intrest();
	ptr=&c;
	ptr->get();
	ptr->cal_intrest();
}
