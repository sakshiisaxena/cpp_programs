#include<iostream>
using namespace std;

class Plot
{
	private:
		float length, breadth;
		float cost1, cost2;
	public:
		void input()
		{
			cout<<"\nEnter length of the plot: ";
			cin>>length;
			cout<<"\nEnter breadth of the plot: ";
			cin>>breadth;
		}
		float fencing(float rate)
		{
			cout<<"\nEnter rate for fencing: ";
			cin>>rate;
			cost1=2*(length+breadth)*rate;
			cout<<"\nThe cost of fencing is Rs:"<<cost1<<endl;
		}
		float flooring(float rate)
		{
			cout<<"\nEnter rate for flooring: ";
			cin>>rate;
			cost2=length*breadth*rate;
			cout<<"\nThe cost of flooring is Rs:"<<cost2<<endl;
		}
		Plot()
		{
			cost1=0;
			cost2=0;
		}
};
int main()
{
	Plot p;
	float rate;
	p.input();
	p.fencing(rate);
	p.flooring(rate);
	return 0;
}
