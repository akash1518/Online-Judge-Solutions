#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		int n,t,d,countv=0;
		cin>>n>>t>>d;
		int h[n];
		for(int i=0;i<n;i++)
		{ 
			cin>>h[i];
			if(h[i]>d)
		{ 
		   if(h[i]%d==0)
		   	countv+=(h[i]/d)-1;
		   else
		   	countv+=h[i]/d;
	    }
        }
        if(countv>=t) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


	}
	return 0;
}