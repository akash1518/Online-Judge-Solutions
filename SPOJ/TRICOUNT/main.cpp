#include <bits/stdc++.h>

using namespace std;
int main()
{
    long long int t,n;
    cin>>t;
    while(t--)
    {   long long int tt;
        cin>>n;
         tt=(n*(n+2)*(2*n+1))/8;
         cout<<tt<<endl;
    }
    return 0;
}
