#include<bits/stdc++.h>
using namespace std;
int main()
{  int t;
cin>>t;
while(t--)
{
 int n,z,sum=0;
 cin>>n;
 int a[n],b[n];
 for(int i=0;i<n;i++)
 {
cin>>a[i];
}
for(int i=0;i<n;i++)
 {
cin>>b[i];
}
 sort(a,a+n);
 sort(b,b+n);
 for(int i=0;i<n;i++)
 {
     z=a[i]*b[i];
     sum+=z;
 }
 cout<<sum<<endl;
}
    return 0;
}
