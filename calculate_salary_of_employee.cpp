#include<iostream>
using namespace std;
class employee
{
    string name;
	int age;
	string dept;
	float sal;
	public:
		void input();
		void calsal();
		void display();
		Employee()
			{
			name="Ram";
			age=25;
			dept="Software";
			sal=60000;
			}
};

void employee::input()
{
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter age, sal and department";
	cin>>age>>sal>>dept;
}

void employee::calsal()
{
	long t_sal = 12*sal;
	cout<<"Salary is:"<<t_sal<<endl;
}

void employee::display()
{
	cout<<endl<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"Department:"<<dept<<endl<<"Salary:"<<sal<<endl;
	calsal();
}

int main()
{
	int i;
	employee ob[3];
	cout<<"Enter details of employee"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"Employee no:"<<i+1;
		ob[i].input();
	}
	cout<<"Displaying details of employee"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<"Employee :"<<i+1;
		ob[i].display();
	}
}
