#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[150],b[150],c[150],d[150];
    int n,e,flg1,flg2,i,j,m,l,k,index,carry=0,r,rem=0;
    std::cin>>n>>e;
    flg1=n;
    while(flg1!=0)
    {
        a[i]=flg1%10;
        flg1=flg1/10;
        i++;
        m++;
    }
    flg2=e;
        while(flg2!=0)
    {
        b[j]=flg2%10;
        flg2=flg2/10;
        j++;
        l++;
    }
    for(k=l;k<m;k++)
    {
        b[k]=0;
    }
    for(index=0;index<m;index++)
    {
        r=a[index]+b[index]+carry;
        c[index]=r%10;
        carry=r/10;
        index++;

    }

        if(c[m-1]>=2)
        {
        d[m-1]=c[m-1]/2;
        for(int v=m-2;v>=0;v--)
        {
          d[v]=(c[v]+10)/2;
        }
        }
        else if(c[m-1==1]){
            d[m-1]=(1*10+c[m-2])/2+rem;
            for(int v=m-2;v>=1;v--)
        {
            d[v]=((rem*10)+c[v-1])/2;
            rem=(rem*10+c[v-1])%2;
        }
        d[0]=0;
        }
        for(int u=0;u<m;u++)
        {
            cout<<c[u];
        }
                for(int u=0;u<m;u++)
        {
            cout<<d[u];
        }


    return 0;
}
