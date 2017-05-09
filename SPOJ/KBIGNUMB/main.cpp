#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    long long int n,c,a,m,i=0,ans;
    cin>>n>>a>>m;
    int  num[1000];
    while(a--)
    {
        long long int temp=n;
    while((temp/10)!=0)
    {   c=temp%10;
        num[i]=c;
        temp/=10;
        i+=1;
    }
    }
          long long int v=0,d=1;
          long long int w;
          for( w=0;w<i;w++){
          v+=num[w]*d;
          d*=10;
          }
    cout<<v%m<<endl;
}
return 0;
}
