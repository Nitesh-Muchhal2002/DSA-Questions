#include<bits/stdc++.h>
using namespace std;
//int fib(int n)
//{
//	if(n<=1)
//	{
//		return 1;
//	}
//	int last=fib(n-1);
//	int slast=fib(n-2);
//	return last+slast;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	cout<<fib(n);
//}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    for(int i=n-1;i>=0;i--)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}