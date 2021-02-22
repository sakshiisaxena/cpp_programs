#include <iostream>
using namespace std;

class leapyear
{
	int y;
	public:
		void leap();
};

void leapyear::leap()
{
  cout<<"Enter year: ";
  cin>>y;
   if (y % 4 == 0) {
      if (y % 100 == 0) {
         if (y % 400 == 0) 
           cout<<"year is leap year";
         else
           cout<<"year is not leap";
       }
      else cout<<y<<"is a leap year";
   }
   else
   cout<<y<<"is not a leap year";
}

int main()
{
	leapyear y;
	y.leap();
}
      
