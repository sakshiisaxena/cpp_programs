#include<iostream>
using namespace std;
class arrange
{
	private:
	int n[100];
	int even[10],odd[10];
	int size,j=0,k=0;
	public:
		void sort(int arr[],int n)
		{    
			int t=0;
	 		for(int i=0;i<size;i++)
			{		
				for(int j=i+1;j<size;j++)
				{
					if(arr[i]>arr[j])
					{
						t  =arr[i];
						arr[i]=arr[j];
						arr[j]=t;
					}
				}
			}
				for(int i=0;i<size;i++)
				cout<<arr[i]<<" ";	
		}		
		void input()
		{
			cout<<"Enter size of the array:"<<endl;
			cin>>size;
			cout<<"\nEnter the numbers in the array:";
			for(int i=0;i<size;i++)
			{
				cin>>n[i];
			}
			 for(int i=0;i<size;i++)
        	{
				if (num[i]%2 == 0)
				{
				   even[j]=num[i];
				   j++;
				}
			else
				{
	 			  odd[k]=num[i];
				   k++;
				}
       		}
    			sort(odd,k);
    			sort(even,j);
		}
};
int main()
{
	arrange obj;
	obj.input();
	return 0;
}

