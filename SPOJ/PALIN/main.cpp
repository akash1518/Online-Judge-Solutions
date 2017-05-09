#include <bits/stdc++.h>
int flag;
char a[1000000];
void palin()
{
    int l,tl,m,i;
    l=strlen(a);
    flag=1;
    for(i=0; i<l; i++)//check if there is 9
{
if(a[i] != '9')
{
flag = 0;
break;
}
}
if(flag==1)//every digit is 9
{ a[0]='1';
    for(i=1;i<l;i++)
    a[i]='0';
    a[l]='1';
    a[l+1]='\0';
    return;
}
  flag=0;
    for(i=0;i<l/2;i++)
    {
        if(a[i]<a[l-i-1])
        {
            flag=-1;
        }
        else if(a[i]>a[l-i-1])
        {   flag=1;
            a[l-i-1]=a[i];
        }
    }
    if(flag==-1 || flag==0)
    {  m=0;
      if(l%2==0)
        tl=l/2-1;
      else
        tl=l/2;

      while(a[tl-m]=='9')
      {
          a[tl-m]='0';
          a[l-1-tl+m]='0';
          m++;
      }
      a[tl-m]++;
      a[l-1-tl+m]=a[tl-m];
    }
      return;
    }


int main()
    {
int t;
scanf("%d\n",&t);
while(t--)
{  scanf("%s",a);
  printf("%s\n",a[5]);
palin();
printf("%s\n",a);
}

return 0;
}
