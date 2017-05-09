#include <bits/stdc++.h>
int main()
{
    int t;
    double vol,S,a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf",&vol);
        a=pow(4*vol,0.3333333333333333333333333);
        S=3*a*a*sqrt(3)/2;
        printf("%.10lf\n",S);
    }
    return 0;
}