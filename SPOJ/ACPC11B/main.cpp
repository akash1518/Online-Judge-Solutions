#include <bits/stdc++.h>
using namespace std;

int main()
{ int t;
  cin>>t;
while(t--){
     int n; cin>>n;
int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    int m; cin>>m;
    int b[m];
    int ans=1000000,s;
    for(int j=0;j<m;j++) cin>>b[j];
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0;i<n;i++)
    { for(int j=0;j<m;j++)
    {
         if(a[i]>b[j])
          s= a[i]-b[j];
          else
          s= b[j]-a[i];
         if(s<ans)
          ans=s;
    }
    }
    cout<<ans<<endl;
}
    return 0;
}
