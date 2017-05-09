//http://www.spoj.com/problems/FIBOSUM/
//Author - Akash, IIT(ISM)
//@akash1518
#include <bits/stdc++.h>
using namespace std;
int fib(int n)
{
  int a = 0, b = 1, c, i;
  if( n == 0)
    return a;
  for (i = 2; i <= n; i++)
  {
     c = a + b;
     a = b;
     b = c;
  }
  return b;
}
int main()
{  int t;
while(t--){
  long long int n,m,ans=0;
  cin>>n>>m;
  ans=fib(m+2)-fib(n+2);
  cout<<ans<<endl;
}
 return 0;
}
