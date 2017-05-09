#include<bits/stdc++.h>
char a[1000002];
int flag;
void palin()
{
int len,i,t,tl;
len = strlen(a);
flag = 1;
for(i=0; i<len; i++)
{
if(a[i] != '9')
{
flag = 0;
break;
}
}
if(flag == 1)
{
a[0] = '1';
for(i=1; i<len; i++)
a[i] = '0';
a[len] = '1';
a[len+1] = '\0';
return ;
}
flag = 0;
for(i=0; i<len/2; i++)
{
if(a[i] < a[len-i-1])
flag = -1;
else if(a[i] > a[len-i-1])
flag = 1;
a[len-i-1] = a[i];
}
if(flag == -1 || flag==0)
{
t = 0;
if(len%2 == 0)
tl = len/2-1;
else
tl = len/2;
while(a[tl-t] == '9')
{
a[tl-t] = '0';
a[len-1-tl+t] = '0';
t ++;
}
a[tl-t] ++;
a[len-1-tl+t] = a[tl-t];
}
return ;
}
int main()
{
int t,i;
scanf("%d\n",&t);
for(i=0; i<t; i++)
{
scanf("%s",a);
palin();
printf("%s\n",a);
}
return 0;
}
