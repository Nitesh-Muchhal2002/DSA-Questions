#include<bits/stdc++.h>
using namespace std;
void bubblesort(int arr[],int n)
{
	for(int i=n-1;i>=0;i--)
	{ 
	
		for(int j=0;j<=i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
//				int temp=arr[j+1];
//				arr[j+1]=arr[j];
//				arr[j]=temp;
                    swap(arr[i],arr[j]);
			
			}
			
			
		}
		//cout<<"Swappinng huai hai"<<endl;
	}
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"before swapin array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}
	bubblesort(arr,n);
		cout<<"after sorting array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i];
	}
	return 0;
}