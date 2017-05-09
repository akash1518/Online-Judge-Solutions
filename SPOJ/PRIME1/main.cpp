#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     long long int m,n;
     cin>>m>>n;
     bool a[n-m+1];
       for(int i=0;i<(n-m+1);i++)
          a[i]=true;
       for(int j=2;j<=sqrt(n);j++)
    {
       for(int k=m/j;k<=(n/j);k++){
           if(k>1)
    {
      a[k*j-m]=false;
    }
    }
    }
     for(int l=0;l<(n-m+1);l++)
    {
        if(a[l]==true)
    {
     cout<<(l+m)<<endl;
    }
    }
    }
    return 0;
}
