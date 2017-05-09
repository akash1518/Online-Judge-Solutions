#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
	if (b== 0)
		return a;
	return gcd(b, a%b);
}
int comdiv(int a,int b)
{
    int n = gcd(a, b);
    int ans = 0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0)
        {
            if (n/i == i)
                ans += 1;
            else
                ans += 2;
        }
    }
    return ans;
}
int main()
{
   int t;
   scanf("%d",&t);
   while(t--){
    int a,b;
    scanf("%d%d",&a,&b);
    int ans=comdiv(a,b);
    printf("%d\n",ans);
   }
    return 0;
}
