#include<bits/stdc++.h>
using namespace std;
// bool binarySearch(vector<int> &nums,int target)
// {
// 	 int n=nums.size();
// 	int low=0,high=n-1;
// 	while(low<=high)
// 	{
// 		int mid=(low+high)/2;
// 		if(nums[mid]==target) return true;
// 		else if(nums[mid]<target) high=mid-1;
// 		else low=mid+1;
//	 }
//	 return false;
// }
 bool searchElement(vector<vector<int>>&mat,int target)
  {
  	  int n=mat.size();
  	  int m=mat[0].size();
  	  int low=0,high=n*m-1;
  	   while(low<=high)
  	   {
  	   	int mid=(low+high)/2;
  	   	  int row=mid/m;
  	   	  int col=mid%m;
  	   	  if(mat[row][col]==target) return true;
  	   	  else if(mat[row][col]<target) low=mid+1;
  	   	  else high =mid-1;
		 }
		 return false;
  }
 int main()
{
	vector<vector<int>>mat={{1,2,3},{4,5,6},{7,8,9}};
	searchElement(mat, 8) == true ? cout << "true\n" : cout << "false\n";

	return 0;
}