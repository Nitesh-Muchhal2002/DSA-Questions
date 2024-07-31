#include<bits/stdc++.h>
using namespace std;
//void revarr(int i,int arr[],int n)
//{
//	if(i>=n/2)
//	return ;
//	swap(arr[i],arr[n-1-i]);
//	revarr(i+1,arr,n);
//}
int main()
{
		
	int n;
          cout<<"enter the array size";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i]>>" ";
	}

//	revarr(0,arr,n);
//	for(int i=0;i<n;i++)
//	cout<<arr[i]<<" ";
  int xor=0;
  for(int i=0;i<n;i++)
  {
  	 xor=xor^arr[i];
  }
   for(int i=0;i<n;i++)
   {
   	 xor=xor^i;
   }
    cout<<xor;
 return 0;
}