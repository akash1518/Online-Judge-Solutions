#include <bits/stdc++.h>
using namespace std;
#define lld long long int
map<lld , lld > m;
lld coin(lld n)
{
 if(n==0) return 0;
 if(m[n]!=0)
 { return m[n];
 }
  else
  {  
   return m[n]=max(coin(n/2)+coin(n/3)+coin(n/4),n);
  }	
}
int main()
{
	lld a;
	while(scanf("%lld",&a) ==1){
	printf("%lld\n",coin(a));
}
	return 0;
}