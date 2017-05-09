#include <bits/stdc++.h>

using namespace std;

int main()
{   int n,l,temp,countv=1;
    cin>>n;
    string a;
    cin>>a;
    l=a.size();
    for(int i=0;i<l;i++)
    {  temp=i;
        while(temp<l)
        {   countv++;
            cout<<a[temp];
            if(countv%2==0)
            temp+=9;
            else
                temp++;
        }
    }
    return 0;
}
