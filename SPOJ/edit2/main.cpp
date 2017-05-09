#include <bits/stdc++.h>
char a[100000];
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


int main() {
      while(scanf("%s",a)!=EOF){
     int l,i;
	int	m1=0,p1=0,m2=0,p2=0;
		l=strlen(a);
		change();
		for(i=0;i<l;i+=2) {
			if(a[i]=='-') continue;
			m1++;
		}
		for(i=1;i<l;i+=2) {
			if(a[i]=='+') continue;
			p1++;
		}
		for(i=0;i<l;i+=2) {
			if(a[i]=='+') continue;
			p2++;
		}
		for(i=1;i<l;i+=2) {
			if(a[i]=='-') continue;
			m2++;
		}
		cout<<min(p1+m1,m2+p2)<<endl;
      }
	return 0;
}
