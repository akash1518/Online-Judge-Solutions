#include <bits/stdc++.h>
using namespace std;
#define N 2005
int p[N];
int dp[N][N]={0};
int profit(int begin,int end,int year)
{
if(begin>end) return 0;

if(dp[begin][end]!=0)
	{
		return dp[begin][end];
	}
else{ 
	return dp[begin][end]=max(profit(begin+1,end,year+1)+p[begin]*year,profit(begin,end-1,year+1)+p[end]*year);
}
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>p[i];
	}
	int ans=profit(0,n-1,1);
	cout<<ans<<endl;
	return 0;
}