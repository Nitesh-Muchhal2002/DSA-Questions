#include<bits/stdc++.h>
using namespace std;
 int findMinimum(vector<int> &arr,int n)
 {
 	 int low=0,high=n-1;
 	 int ans=INT_MAX;
 	 while(low<=high)
 	 {
 	 	int mid=(low+high)/2;
 	 	if(arr[low]<=arr[mid])
 	 	{
 	 		ans=min(ans,arr[low]);
 	 		low=mid+1;
		  }
		  else {
		  	 high=mid-1;
		  	 ans=min(ans,arr[mid]);
		  }
	  }
	  return ans;
 }
int main()
{
	vector<int>arr={4,5,6,7,0,1,2};
	int n=7;
	int min=findMinimum(arr,n);
	cout<<"Minimum in sorted and roted array is:"<<min;
	return 0;
}