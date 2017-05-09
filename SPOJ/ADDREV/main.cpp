#include <bits/stdc++.h>

using namespace std;
int rev(int n)
{
    int d=0,r=0;
     while(n!=0)
    {
        d=n%10;
        r=r*10+d;
        n=n/10;

    }
    return r;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int a,b,t,a1,a2,c;
    cin >>t;
    while(t--){
            int sum=0;
    cin>>a>>b;
    a1=rev(a);
    a2=rev(b);
    sum=a1+a2;
    c=rev(sum);
    cout<<c<<endl;
    }

    return 0;
}
