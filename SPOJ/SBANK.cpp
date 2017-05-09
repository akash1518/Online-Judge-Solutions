#include <bits/stdc++.h>
using namespace std;
int main()
{
	
	int t;
	scanf("%d\n", &t);
	while(t--)
	{   map<string, int > m;
		int n;
		scanf("%d\n", &n);
		while(n--)
		{   
			char s[49];
			gets(s);
			m[(string)s]++;
		}
		 map<string, int>::iterator it;
		 for(it=m.begin();it!=m.end();it++)
		 {
		 	 printf("%s %d\n", it->first.c_str(), it->second);
		 }
		 printf("\n");
		}
	return 0;
}