#include<iostream>
#include<string.h>
using namespace std;

class ReportCard
{
    int marks[5],total;
    int t_max;
    float per;
    char grade[10];

   public: void input();
           void cal_percentage();
           void find_grade();	
};

int main()
{
    ReportCard rc;
    cout<<endl<<"input the details ";
    rc.input();
    cout<<endl<<"Calculate the percentage";
    rc.cal_percentage();
    cout<<endl<<"Finding the grade";
    rc.find_grade();
    return 0;	
}

void ReportCard::input()
{
	cout<<endl<<"Enter the marks in 5 subjects of a student:"<<endl;
    for(int i=0;i<5;i++)
    	cin>>marks[i];
    cout<<endl<<"Enter the maximum marks: ";
    cin>>t_max; 
    cout<<endl<<"Max="<<t_max;	
}

void ReportCard::cal_percentage()
{	
    total=0;
    for(int i=0;i<5;i++)
    {
    	total=total+marks[i];
	}
    cout<<endl<<"Total marks of a student="<<total;
     per=(total*100.0f)/t_max;
    cout<<endl<<"Percentage of a student="<<per;
    cout<<endl<<"Max="<<t_max;	
}

void ReportCard::find_grade()
{
    if(per<33)
    	strcpy(grade,"Fail");
    else if(per>33 && per<48)
    	strcpy(grade,"III Div");
    else if(per>48 && per<59)
    	strcpy(grade,"II Div");
    else if(per>59 && per<60)
    	strcpy(grade,"I Div");
    else if(per>75)
    strcpy(grade,"Distition");

}

