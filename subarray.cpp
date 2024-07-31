#include<bits/stdc++.h>
using namespace std;
void subarray(int arr[],int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			for(int k=i;k<j;k++)
			{
				cout<<arr[k]<<" ";
			
			}
			cout<<endl;
		}
		
	}
}
int main()
{
	int arr[]={1,2,4,6,3};
//     int n=sizeof(arr)/sizeof(arr[0]);
   int n=5;

	cout<<"subarray is:"<<endl;
		subarray(arr,n);
	return 0;
}