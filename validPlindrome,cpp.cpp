#include<bits/stdc++.h>
using namespace std;
 bool isPalindorme(string s)
 {
 	string newStr;
 	for(char c:s)
 	{
 		if(isalnum(c))
 		{
 			newStr+=tolower(c);
		 }
	 }
	 int start=0;
	 int end=newStr.size()-1;
	 while(start<end)
	 {
	if(newStr[start]!=newStr[end])
	{
		return false;
	}
	 start++;
	 end--;
	 }
	 return true;
 }
int main()
{
	 string s;
	 cout<<"enter the string";
	 getline(cin,s);
	cout<<isPalindorme(s);
	return 0;
}