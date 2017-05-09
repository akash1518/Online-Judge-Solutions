#include <bits/stdc++.h>
using namespace std;

int main()
{int a[10];
int sum=0,ans=0;
for(int i=0;i<10;i++)
{
    cin>>a[i];
}
for(int j=0;j<10;j++)
{
    sum+=a[j];
    if(sum>=100)
    {
      int t=sum-100;
      int l=100-(sum-a[j]);
      if(t<=l) ans=sum;
      else ans=sum-a[j];
      break;
}
else ans=sum;
}
cout<<ans<<endl;


    return 0;
}
