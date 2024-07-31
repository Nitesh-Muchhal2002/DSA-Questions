#include<bits/stdc++.h>
using namespace std;
void rotateString(string &s,string &goal)
{
	queue<char>q1,q2;
	for(int i=0;i<s.size();i++)
	 q1.push(s[i]);
	 
	 for(int i=0;i<goal.size();i++)
	  q2.push(goal[i]);
	  
	  int k=goal.size()-1;
	  while(k!=0)
	  {
	  	char ch=q2.front();
	  	q2.pop();
	  	q2.push(ch);
	  	if(q1==q2)
	  	{
	  		 cout<<"string rotate each other\n";
	  		 break;
		  }
	  	 k--;
	  }
	  cout<<k<<"\n";
	  if(q1!=q2)
	  cout<<"string is not rotate each other\n";
}
int main()
{
	 string s="abcde";
	 string goal="cdeab";
	 rotateString(s,goal);
	 return 0;
	 
}