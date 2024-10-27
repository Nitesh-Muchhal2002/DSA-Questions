#include<bits/stdc++.h>
using namespace std;
void printSum(int i,int sum)
{
	if(i<1)
	{
		cout<<sum;
		return;
	}
	printSum(i-1,sum+i);
}

int main()
{
	int n;
	cin>>n;
	printSum(n,0);
}
int fact(int n)
{
	if(n==0)
	return 1;
	return n*fact(n-1);
}
int main()
{
	int n;
	cin>>n;
	cout<<fact(n);
}
int main() {
   // Complete the code.
   int a;
   float b;
   long c;
   double d;
   char ch;
   cin>>a>>b>>c>>d>>ch;
   cout<<a<<endl;
   cout<<b<<endl;
   cout<<c<<endl;
   cout<<d<<endl;
   cout<<ch;
   return 0;
}
