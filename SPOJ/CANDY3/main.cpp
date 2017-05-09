#include <bits/stdc++.h>
#include<boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;
int main()
   {
       mp::cpp_int t;
       cin>>t;
       while(t--){
    long long int n,i;
    cin>>n;
    mp::cpp_int a[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    if(sum%n==0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
       }
    return 0;
}
