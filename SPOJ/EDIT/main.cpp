#include <bits/stdc++.h>
char a[10000];
using namespace std;
 void change()
 {
    int l=strlen(a);
     for(int i=0;i<l;i++)
        {
            if(int(a[i])<94)
            a[i]='-';
            else
            a[i]='+';
        }
        return;
 }

int main()
{   int l;
    scanf("%s",a);
    int countv=0;
    l=strlen(a);
    change();
    if(a[0]=='+'){
    for(int i=0;i<l-2;i++)
    {
   if(a[i]==a[i+1]&&a[i]=='-'){
            if(a[i+1]==a[i+2])
      a[i+1]='+';
    else
        a[i]='+';
         countv++;
        }
    if(a[i]==a[i+1]&&a[i]=='+'){
            if(a[i+1]==a[i+2])
      a[i+1]='-';
    else
        a[i]='-';
     countv++;
        }
    }}
     if(a[0]=='-'){
    for(int i=0;i<l-2;i++)
    {
   if(a[i]==a[i+1]&&a[i]=='-'){
            if(a[i+1]==a[i+2])
      a[i+1]='+';
    else
        a[i]='+';
         countv++;
        }
    if(a[i]==a[i+1]&&a[i]=='+'){
            if(a[i+1]==a[i+2])
      a[i+1]='-';
    else
        a[i]='-';
     countv++;
        }
    }}

    cout<<countv<<endl;

    return 0;
}
