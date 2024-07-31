#include<bits/stdc++.h>
using namespace std;
//long long sumOfSeries(long long n) {
//        // code here
//        if(n<0)
//        {
//         return 0;
//		}
//      
//        long long sum=(n*(n+1)/2)*(n*(n+1)/2);
//        return sum;
//    }
//    int main()
//    {
//    	long long n;
//    	cout<<"enter the value:";
//    	cin>>n;
//    	cout<<sumOfSeries(n);
//    	return 0;
//	}
int main()
{
	int n;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			cout<<"number is prime";
		}
		else{
			cout<<"not a prime";
		}
	}
	return 0;
}