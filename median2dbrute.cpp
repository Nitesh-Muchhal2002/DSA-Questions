#include<bits/stdc++.h>
using namespace std;
int median(vector<vector<int>> &matrix,int n,int m)
{
	 vector<int>lst;
	 for(int i=0;i<n;i++)
	 {
	 	 for(int j=0;j<m;j++)
	 	 {
	 	 	lst.push_back(matrix[i][j]);
		  }
	 }
	 sort(lst.begin(),lst.end());
	 return lst[(m * n) / 2];
}
int main()
{
	vector<vector<int>>matrix={{2,3,4},{10 ,20, 30},{40,55,56 }};
	int n=matrix.size();
	int m=matrix[0].size();
	int ans=median(matrix,n,m);
	cout<<" The Median element is :"<<ans;
	return 0;
}