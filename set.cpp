#include<iostream>
using namespace std;
class set
{
    int a[6],n;
public:
    void intersection(set,set);
    void Union(set, set);
    void display();
    set()
    {
        n=3;
        a[0]=0;
        a[1]=0;
        a[2]=0;
    }
    set (int b[], int m)
    {
        int i;
        n=m;
        for(i=0; i<3; i++)
        {
            a[i]=b[i];
        }

    }
};
void set::intersection(set s2, set s3)
{
    int i,j,k=0;
    
    for(i=0; i<s2.n; i++)
    {
        for(j=0; j<s3.n; j++)
        {
            if(s2.a[i]==s3.a[j])
            {
                a[k]= s2.a[i];
                k++;
            }
        }
    }
    n=k;
}
void set:: Union(set s2, set s3)
{
    int k=0,i,j;
    int flag=0;
    for(i=0; i<s2.n; i++)
    {
        a[k]= s2.a[i];
        k++;
    }
    for(i=0; i<s2.n; i++)
    {
        flag=0;
        for(j=0; j<s3.n; j++)
        {
            if(a[j]==s3.a[i])
            {
                flag=1;
                break;

            }
        }
        if(flag==0)
        {
            a[k]= s3.a[i];
            k++;
        }
    }
    n=k;
}
void set::display()
{
    cout<<"{";
    for(int j=0; j<n; j++)
        cout<<a[j]<<",";
    cout<<"}";
}
int main()
{
    int arr[3];
    set s1;
    cout<<"Enter the 3 elements of the first set: "<<endl;
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    cout<<"\nEnter the 3 elements of the second set: "<<endl;
    set s2(arr, 3);
    for(int i=0; i<3; i++)
    {
        cin>>arr[i];
    }
    set s3(arr, 3);
    set s4;
    set s5;
    s4.intersection(s2, s3);
    cout<<"\nSET 1: ";
    s2.display();
    cout<<"\nSET 2: ";
    s3.display();
    cout<<"\nINTERSECTION: ";
    s4.display();
    s5.Union(s2, s3);
    cout<<"\nUNION: ";
    s5.display();
    return 0;
}
