#include <bits/stdc++.h>
include<boost/multiprecision/cpp_int.hpp>
using namespace std;
namespace mp = boost::multiprecision;
#define mp::cpp_int 11;
int gcd(11 a, 11 b)
{ 11 s=min(a,b);
    11 l=max(a,b);
    if(s==0)return l;
    else
        return gcd(s,l%s);
}

int main()
{
    11 a,b,l;
    cin>>a>>b;
    l=gcd(a,b);
    cout<<l<<endl;
    return 0;
}
