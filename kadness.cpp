#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	 cout<<"Array is\n";
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	}
	cout<<endl;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		ans=ans^arr[i];
    }
    cout<<"unique element in array is"<<ans;
	return 0;
}