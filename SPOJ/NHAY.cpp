##naive approach
#include <bits/stdc++.h>
using namespace std;
int searchme(string text,string p)
{
	int n=text.length();
	int m=p.length();
	if(n>=m){
	for (int i = 0; i <=n-m; ++i)
	{   int j;
		for (j = 0; j < m; ++j)
		{
			if(p[j]!=text[i+j]) break;
		}
		if(j==m&&i>=0)
		   printf("%d\n",i);
    }
}
else
printf("\n");
}
int main()
{   int n;
	while(scanf("%d\n",&n)!=EOF)
	{
	string x,y;
	cin>>x>>y;
    searchme(y,x);
}
	return 0;
}