#include<bits/stdc++.h>
using namespace std;
 int maxProductsubarr(vector<int>&arr)
 {
 	 int maxi=arr[0];
 	 for(int i=0;i<arr.size();i++)
 	 {
 	 	int p=arr[i];
 	 	for(int j=i+1;j<arr.size();j++)
 	 	{
 	 		maxi=max(maxi,p);
 	 		p*=arr[j];
		  }
		  maxi=max(maxi,p);
	  }
	 return maxi;
 }
int main()
{
	vector<int>arr={2,4,6,5,-1};
	cout<<"The maximum product subarray"<<maxProductsubarr(arr);
	return 0;
}