#include<bits/stdc++.h>
using namespace std;
  //power of two
//int boolpow(int n)
//{
//	for(int i=0;i<=30;i++)
//	{
//		int ans=pow(2,i);
//		if(ans==n)
//		{
//			return true;
//		}
//	}
//	return false;
//}
int main ()
{
	  //decimal to binary
//	int n;
//	cout<<"enter the decimal no"<<endl;
//	cin>>n;
//	int ans=0;
//   int i=0;
//	while(n!=0)
//	{
//		int bit=n&1;
//		ans=(bit*pow(10,i))+ans;
//		n=n>>1;
//		i++;
//	}
//	cout<<"Binary no is:"<<ans;
   //binary to decimal
// int n;
// cout<<"entet binary no"<<endl;
// cin>>n;
// int ans=0;
// int i=0;
// while(n!=0)
// {
// 	int digit=n%10;
// 	if(digit==1)
// 	{
// 		ans=pow(2,i)+ans;
//	 }
//	 n= n/10;
//	 i++;
// }
// cout<<"decimal no is"<<ans;
int n;
cin>>n;
 cout<<boolpow(n);
}