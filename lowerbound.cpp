#include<bits/stdc++.h>
using namespace std;
 int upperBound(vector<int>arr,int n,int x)
 {
 	int low=0,high=n-1;
 	int ans=n;
 	while(low<=high)
 	{
 		int mid=low+(high-low)/2;
 		//for lower bound
 		 //if(arr[mid]>=x)
 		//for upper bound
 		if(arr[mid]>x)
 		{
 			ans=mid;
 			//look for more small index on left
 			high=mid-1;
		 }
		 else{
		 	 low=mid+1;
		 }
	 }
	 return ans;
 }
int main()
{
	vector<int>arr={1,2,3,4,5,6,7};
	int n=7,x=8;
	int ind=upperBound(arr,n,x);
	cout<<"Upper Bound at idex:"<<ind;
	return 0;
}