#include <bits/stdc++.h>
using namespace std;
int main()
{  int t=0;
	 string x;
    cin>>x;
    while(x[0]!='-'){
	stack<int> s;
	t++;
    for(int i=0;i<x.length();i++)
    {
    	if(x[i]=='}'&&s.empty())
    	{
    		s.push(x[i]);
    	}
    	else if(x[i]=='}'&&s.top()=='{') s.pop();
    	else s.push(x[i]);
    }
    int ans=0;
    while(!s.empty())
    {
    	int a=s.top();
    	s.pop();
    	if(a==s.top())
    		ans+=1;
    	else
    		ans+=2;
    	s.pop();
    }
    cout<<t<<". "<<ans<<endl;
    cin>>x;
}

	return 0;
}