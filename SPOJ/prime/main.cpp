#include <bits/stdc++.h>
using namespace std;
long long int primes[100000000];
long long int countv;
 void seive(long long int n)
{ long long int i,k,j,z;
    for(i=0;i<(n);i++)
    {
      primes[i]=1;
      primes[0]=0;
      primes[1]=0;
    }
    for(k=2;k<=sqrt(n);k++)
    {
     for(j=2;j*k<=n;j++)
     {
         primes[j*k]=0;
     }
    }
    for(z=0;z<n;z++)
    {
        if(primes[z]==1)
            countv++;
    }
}

int main()
{ int t;
cin>>t;
while(t--){
   long long  int m,n,i,s,l,j;//n is greater
    cin>>m>>n;
    if(m==1||m==0)
        m=2;
    int a[n-m+1];
    seive(n);
    for( l=0;l<(n-m+1);l++){
        a[l]=1;}
    for(i=2;i<=countv;i++)
    {  if(primes[i]==1){
    for(s=m/i;s<=n/i;s++)
    {   if(s>1)
        a[s*i-m]=0;
}
    }
    }

    for( j=0;j<(n-m+1);j++)
    {
        if(a[j]==1)
        {
            cout<<j+m<<endl;
        }
    }
}
    return 0;
}
