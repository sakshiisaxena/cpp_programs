#include<iostream>
using namespace std;
class StudentMarks
{
long regNo;
int marks[3];
static int count;
public:
StudentMarks()
{
regNo=123456;
marks[0]=100;
marks[1]=100;
marks[2]=100;
count++;
}
float avg();
void input();
void output();
static int getcount()
{
//return count;
StudentMarks temp;
cout<<"\ncheck;;"<<temp.regNo;
temp.input();	}
};
int StudentMarks::count=0;
void StudentMarks::input()
{
cout<<"enter marks in three subjects(each out of 100)";
for(int i=0;i<3;i++)
cin>>marks[i];
cout<<"enter registration no.";
cin>>regNo;
cout<<endl<<"check;;"<<count<<"\n";
}
float StudentMarks::avg()
{
float total=0.0;
for(int i=0;i<3;i++)
{
total=total+marks[i];
}
return total/3.0;
}
void StudentMarks::output()
{
cout<<regNo<<"\t"<<marks[0]<<"\t"<<marks[1]<<"\t"<<marks[2];
cout<<"\n"<<"total students"<<"\n"<<count;
}
int main()
{

int n;
cout<<"enter no. of students in mark list";
cin>>n;
StudentMarks ob;
ob.input();
ob.getcount();//cannot have this pointer
//	StudentMarks::input();
StudentMarks::getcount();
StudentMarks obj[n];
for(int i=0;i<n;i++)
{
obj[i].input();
obj[i].avg();
}
cout<<"REG NO.\tMATHS\tSCIENCE\tENGLISH\n";
for(int i=0;i<n;i++)
{
obj[i].output();
cout<<"\n";
}
cout<<"\n"<<"total students"<<"\n"<<StudentMarks::getcount();
}
