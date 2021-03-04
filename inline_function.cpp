#include<iostream>
using namespace std;
 
class line
{
   public:
          inline float mul(float x,float y)
          {
              return(x*y);
          }
          inline float cube(float x)
          {
              return(x*x*x);
          }
};
 
int main()
	{
	  line obj;
	  float val1,val2;
	  cout<<"\nEnter the value:";
	  cin>>val1;
	  cout<<"\nEnter the value of the multiplier:";
	  cin>>val2;
	  cout<<"\nMultiplication value is :: "<<obj.mul(val1,val2);
	  cout<<"\n\nCube value is :: "<<obj.cube(val1)<<"\n";
}
