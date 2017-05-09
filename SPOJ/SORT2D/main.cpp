/http://www.spoj.com/problems/SORT2D/
//Author - Akash, IIT(ISM)
//@akash1518
#include<bits/stdc++.h>
using namespace std;
#define s(a) scanf("%d",&a)
#define sl(a) scanf("%lld",&a)
#define sd(a) scanf("%lf",&a)
#define ss(a) scanf("%s",a)
#define p(a) printf("%d",a)
#define pl(a) printf("%lld\n",a)
#define pd(a) printf("%lf\n",a)
#define ps(a) printf("%s\n",a)

bool check(pair<int ,int> a,pair<int ,int> b)
{
    return (a.first<b.first) || ((a.first == b.first)&& (a.second > b.second));
}

int main()
{
    int t;
    s(t);
    while(t--) {
        int n;
        s(n);
        vector< pair<int,int> > v;
        int a,b;
        for(int i=0;i<n;i++) {
            s(a);
            s(b);
            v.push_back(make_pair(a,b));
        }
        sort(v.begin(),v.end());
        sort(v.begin(),v.end(),check);
        for(int i=0;i<n;i++)
            printf("%d %d\n",v[i].first,v[i].second);
    }
    return 0;
}
