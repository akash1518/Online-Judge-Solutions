//http://www.spoj.com/problems/ALIEN/
//Author - Akash, IIT(ISM)
//@akash1518
#include <bits/stdc++.h>
#define lli long long
#define MAX 1000005

using namespace std;

lli A[MAX];

int main()
{  ios_base::sync_with_stdio(false);//decrease time complexity of cout,cin
    int t;
   cin>>t;
   while(t--){
    int n,M;
	lli sum = 0;
    cin >> n>>M;

    for ( int i = 0; i < n; i++ ) cin >> A[i];

    int l = 0, r = 0,countv=0,val=0;
	lli ans = 0;

    while ( l < n ) {
       while ( r < n && sum + A[r] <= M ) {
           sum += A[r];
           r++;
       }
       countv=r-l;
       if(countv>val||(countv==val&&sum<ans)){
        val=countv;
        ans=sum;
       }
       sum -= A[l];
       l++;
    }

  cout<<ans<<" "<<val<<endl;
   }
    return 0;
}
