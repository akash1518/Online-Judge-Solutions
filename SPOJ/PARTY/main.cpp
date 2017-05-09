//http://www.spoj.com/problems/PARTY/
//Author - Akash, IIT(ISM)
//@akash1518
#include <bits/stdc++.h>
using namespace std;
void knapSack(int W, int wt[], int val[], int n)
{
   int i, w,ans=-1;
   int K[n+1][W+1];
   for (i = 0; i <= n; i++)
   {
       for (w = 0; w <= W; w++)
       {
           if (i==0 || w==0)
               K[i][w] = 0;
           else if (wt[i-1] <= w)
                 K[i][w] = max(val[i-1] + K[i-1][w-wt[i-1]],  K[i-1][w]);

           else
                 K[i][w] = K[i-1][w];
       }
   }
for(int i=0;i<=W;i++)
{
    if(K[n][i]==K[n][W]){
        ans=i;
        break;
    }
}
    cout<<ans<<" "<<K[n][W]<<endl;
}

int main()
{
   int n,W;
   while(1){
   cin>>W>>n;
   if(W==0||n==0) break;
   else{
   int wt[n],val[n];
   for(int i=0;i<n;i++)
   {
       cin>>wt[i]>>val[i];
   }
   knapSack(W,wt,val,n);
   }
   }
    return 0;
}
