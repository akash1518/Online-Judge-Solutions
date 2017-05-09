#include <bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		int l=s.length();
		bool b=true;
		for(int i=0;i<l/2;i++)
		{
			if(s[i]!=s[l-i-1])
			{
				b=false;
				break;
			}
         }
         if(b) cout<<"YES"<<endl;
         else cout<<"NO"<<endl;
	}
	return 0;
}