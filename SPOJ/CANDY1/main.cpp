#include <bits/stdc++.h>

using namespace std;

int main()
{

    while(1)
    {
     vector<int> a;
      int r,x,n;
      int sum=0,ans=0;
        cin>>n;
        if(n==-1)
         break;
          for(int i=0;i<n;i++)
            {    cin>>x;
                a.push_back(x);
            }
            for(int i=0;i<n;i++)
            {
               sum+=a[i];
            }
            if(sum%n==0)
            {
              r=sum/n;
              for(int i=0;i<n;i++)
              {
                  if(a[i]>r)
                  {
                      ans+=a[i]-r;
                  }
              }
              cout<<ans<<endl;

            }
            else
            {
                cout<<-1<<endl;
            }
        }
    return 0;
}
