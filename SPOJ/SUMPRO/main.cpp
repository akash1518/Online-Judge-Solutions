#include <bits/stdc++.h>

using namespace std;

int main()
{  long long int t;
   cin>>t;
    while(t--){
       long long int n,i,x,sum=0;
cin>>n;
 for(i=0;i<n;i++)
 {
     x=n/(i+1);
     sum+=x*(i+1);
 }
 cout<<sum%(1000000007)<<endl;
}

    return 0;
}
