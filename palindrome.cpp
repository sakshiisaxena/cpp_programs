//Check whether a given number is palindrome or not.

#include<iostream>
using namespace std;
void retryOption();
class palindrome
{	
	int num;
	public:
		void input();
		void checkpalindrome();
};

int main()
{
	palindrome obj;
	obj.input();
	obj.checkpalindrome();
	
	return 0;
	
}

void palindrome::input()
{
	cout<<"Enter no.: " ;
	cin>>num;
}

void palindrome::checkpalindrome()
{
	int n=num, rev=0, digit;
	
	while (n!=0)
	{
		digit = n%10;
		rev = (rev * 10) + digit;
		n = n/10;
	}
	
//	cout<<rev;
	
	if(num==rev)
	{
		cout<<"\nyes, it is a palindrome";
		retryOption();
	}
	else
	{
		cout<<"\nNot a palindrome";
		retryOption();
	}	
	
}

void retryOption()
{
	int r;
	cout<<"\n\nWant to retry?\n Press 1 for Yes \n 0 for Exit";
	cin>>r;
	if (r==1)
	{
		main();
	}
	else if(r==0)
	{
		cout<<"Thankyou! Bye Bye";
		exit(0);	
	}
	else 
		cout<<"Invalid input";
		retryOption();
}
