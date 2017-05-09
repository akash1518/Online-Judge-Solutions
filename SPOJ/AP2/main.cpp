#include <bits/stdc++.h>

using namespace std;

int main()
{    int t;
cin>>t;
while(t--){
    long long int x,y,z,n,a,d,ser;
    cin>>x>>y>>z;
    n=2*z/(x+y);
    d=(x-y)/(5-n);
    a=x-2*d;
    cout<<n<<endl;
    for(int i=0;i<n;i++)
    {
        ser=a+i*d;
        cout<<ser<<" ";
    }
    cout<<endl;
}
    return 0;
}
