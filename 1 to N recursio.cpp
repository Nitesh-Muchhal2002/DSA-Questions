#include<bits/stdc++.h>
using namespace std;
// print name n times
//void print(int i,int n)
//{
//	if(i>n)
//	return;
//	cout<<"nitesh"<<endl;
//	//cout<<i<<endl; //this code print 1 to n
//	print(i+1,n);
//}
//int main()
//{
//	int n;
//	cin>>n;
//	print(1,n);
//}

// print terms of n to 1
//void rev(int i,int n)
//{
//	if(i<1)
//	return;
//	cout<<i<<endl; //this cout print n to 1
//	rev(i-1,n);
//}
//int main()
//{
//	int n;
//	cout<<"enter no";
//	cin>>n;
//	rev(n,n);
//}
void print(int n)
{
	if(n>1)
	return;
	cout<<n<<endl;
	print(n+1);
}
int main()
{
	int n;
	cin>>n;
	print(n);
}