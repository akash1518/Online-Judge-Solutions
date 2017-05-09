#include <bits/stdc++.h>

using namespace std;

int main()
{   int t;
cin>>t;
while(t--){
    string a,b;
    cin>>a>>b;
    int countv=0;
    int la=a.size();
    int lb=b.size();
    int ld=abs(lb-la);
    int s=min(la,lb);
    for(int i=0;i<s;i++)
    {
        if(a[i]!=b[i])
            countv++;
    }
    cout<<ld<<endl;
    cout<<countv+ld<<endl;
}
    return 0;
}
