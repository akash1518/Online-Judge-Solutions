#include <bits/stdc++.h>

using namespace std;
void add(char a[],char b[])
{
  int la,lb,n,carry=0,i;
  la=strlen(a);
  lb=strlen(b);
  for(int i=la;i<lb;i++)
  {
      a[i]=0;
  }
    for(int i=lb;i<la;i++)
  {
      b[i]=0;
  }
    for(int i=0;i<lb||i<la;i++)
  {
      n=(a[i]-'0')+(b[i]-'0')+carry;
      carry=n/10;
      n=n%10;
      a[i]=n+'0';
  }
  while(carry!=0)
  {
      a[i]=carry%10;
      carry=carry/10;
      i++;
  }
  b[lb]='\0';
  a[i]='\0';

}
  void sub(char a[],char b[])
{ //a-b
  int la,lb,n,carry=0,i;
  la=strlen(a);
  lb=strlen(b);
    for(int i=lb;i<la;i++)
  {
      b[i]=0;
  }
    for(int i=0;i<la;i++)
  {
      n=(a[i]-'0')-(b[i]-'0')-carry;
      if(n<0)
      {
          n+=10;
          carry=1;
      }
      else carry=0;
      a[i]=n+'0';
}
b[lb]='\0';
i=la-1;
while(i>=0&&a[i]==0)
{
    a[i]='\0';
    i--;
}
}
void divi(char a[],int c)
{  int n,l,carry=0,i;
    l=strlen(a);
    for(i=l-1;i>=0;i--)
    {
    n=carry*10+(a[i]-'0');
     n=n/10;
    carry=n%10;
    a[i]=n+'0';
    }
    i=l-1;
    while(i>=0&&a[i]==0)
    {
        a[i]='\0';
        i--;
    }
}
int main()
{
    char n[150],d[150];
    for(int i=0;i<=10;i++)
    {
    cin>>n>>d;

    add(n,d);
    div(n,2);
for ( int i = 0; i < 10; i++ ) {
      cout << n[i]<< endl;
   }
    }
    return 0;
}
