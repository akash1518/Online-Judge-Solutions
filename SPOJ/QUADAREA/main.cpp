#include <bits/stdc++.h>

using namespace std;

int main()
{  int t;
cin>>t;
while(t--){
    double a,b,c,d,s,ans;
    cin>>a>>b>>c>>d;
    s=(a+b+c+d)/2;
    ans=sqrt((s-a)*(s-b)*(s-c)*(s-d));
    printf("%.2f\n",ans);
}
    return 0;
}
