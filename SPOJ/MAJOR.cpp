#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	int n,x;
   	cin>>n;
   	map <int,int> M;
    for(int i=0;i<n;i++)
    { 
      cin>>x;
      M[x]++; 
    }
    bool b=false;
    int ans=0;
    map <int,int>::iterator it;
    for(it=M.begin(); it != M.end();it++)
    {
      if(it->second>n/2)
      {
      	b=true;
      	ans=it->first;
      	break;
      }
    }
    if(b)
    {
    	cout<<"YES "<<ans<<endl;
    }
    else
    {
       cout<<"NO"<<endl;
    }
   }
	return 0;
}