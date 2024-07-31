#include<bits/stdc++.h>
using namespace std;
          //Imlement iterative Binary Search 
//  int binarySearch(vector<int>&arr,int target)
//  {
//  	 int n=arr.size();
//  	 int low=0,high=n-1;
//  	 while(low<=high)
//  	 {
//  	 	int mid=low+(high-low)/2;
//  	 	if(arr[mid]==target)
//  	 	return mid;
//  	 	else if(target>arr[mid])
//  	 	low=mid+1;
//  	 	else
//  	 	 high=mid-1;
//	   }
//	   return -1;
//  }
           //implement recursively
            int binarySearch(vector<int>& arr,int low,int high,int target)
            {
            	//base case
            	if(low>high)
            	return -1;
            	int mid=(low+high)/2;
            	if(arr[mid]==target)
            	return mid;
            	else if(target>arr[mid])
            	return binarySearch(arr,mid+1,high,target);
            	return binarySearch(arr,low,mid-1,target);
			}
			int search(vector<int>& arr,int target)
			{
				return binarySearch(arr,0,arr.size()-1,target);
			}
 int main()
 {
 	vector<int>arr={3,4,5,6,7,12,16};
 	int target=7;
 	int ind =search(arr,target);
 	if(ind==-1)
 	cout<<"The target is not present"<<endl;
 	else
 	 cout<<"The target is at index"<<ind<<endl;
 	 return 0;
 }