#include<bits/stdc++.h>
using namespace std;
void printAlldivision(int n)
{
	 vector<int>ls;
	for(int i=1;i<=sqrt(n);i++)
	{
		if(n%i==0){
			ls.push_back(i);
		
		if((n%i)!=1)
		{
			ls.push_back(n/i);
		}
	}
}
		sort(ls.begin(),ls.end());
		for(auto it: ls)
		cout<<it<<" ";
	
}
int main()
{
	int n;
	cout<<"enter the value of n\n";
	cin>>n;
	printAlldivision(n);
	return 0;
}