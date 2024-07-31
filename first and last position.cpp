#include<bits/stdc++.h>
using namespace std;
 int findFirst(vector<int> &num,int n,int target)
 {
 	int left=0,right=n-1;
      int first=-1;
      while(left<=right)
      {
      	int mid=left+(right-left)/2;
      	if(num[mid]==target)
      	{
      		 first=mid;
      		 right=mid-1;
		  }
		  else if(num[mid]<target)
		  {
		  	  left=mid+1;
		  }
		  else
		  
		  {
		  	 right=mid-1;
		  }
	  }
	  return first;
 }
  int findLast(vector<int> &num,int n,int target)
  {
  	  int left=0,right=n-1;
  	  int last=-1;
  	  while(left<=right)
  	  {
  	  	 int mid=left+(right-left)/2;
  	  	 if(num[mid]==target)
  	  	 {
  	  	 	  left=mid;
  	  	 	   left=mid+1;
			 }
			 else if(num[mid]>target)
			 {
			 	  left=mid+1;
			 }
			 else{
			 	  right=mid-1;
			 }
		}
		return right;
  }
vector<int> searchRange(vector<int> &num,int n,int target)
{
	int first=findFirst(num,n,target);
	  if(first==-1)
	  return {-1,-1};
	int last=findLast(num,n,target);
	return {first,last};
}
int main()
{
	vector<int>num={3,-1,8,3,8 ,1};
	int n=6;
	int target=8;
	vector<int>result=searchRange(num,n,target);
	cout<<"First and Last Position of "<<target<<":["<<result[0]<<","<<result[1]<<"]"<<endl;
	return 0;
}