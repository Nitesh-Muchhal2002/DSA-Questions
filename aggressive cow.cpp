// Aggresive Cow
#include<bits/stdc++.h>
using namespace std;
int canWeplace(vector<int> &stalls,int dis,int cows)
{
	int n=stalls.size();//size of the array
	int cntCows=1;  //number of cows
	int last=stalls[0]; //position of last placed cow
	for(int i=1;i<n;i++)
	{
		if(stalls[i]-last>=dis)
		{
			cntCows++;//next place cow
			last =stalls[i];//update the last position
			
		}
		if(cntCows>=cows)
		{
			return true;
		}
	}
	return false;
}
   int aggreCow(vector<int> &stalls,int k)
   {
   	 int n=stalls.size();
   	 //sort the stalls
   	 sort(stalls.begin(),stalls.end());
   	 int low=1,high=stalls[n-1]-stalls[0];
   	 while(low<=high)
   	 {
   	 	 int mid=(low+high)/2;
   	 	 if(canWeplace(stalls,mid,k)==true)
   	 	 {
   	 	 	low=mid+1;
			 }
			 else
			 high=mid-1;
		}
		return high;
   }
int main()
{
	vector<int>stalls={1,4,6,8,9};
	int k=4;
	int ans=aggreCow(stalls,k);
	cout<<"The maximum possible minimum distance is:"<<ans;
	return 0;
}