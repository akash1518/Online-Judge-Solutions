#include <bits/stdc++.h>
using namespace std;

int main() {
   std::ios::sync_with_stdio(false);
   int t;
   cin>>t;
   while(t--)
   {
      double u,v,w,U,V,W,vol,a,b=12;
      cin>>u>>v>>w>>W>>V>>U;
      
        /*steps to calculate volume of a 
        Tetrahedron using formula*/
        a=4*(pow(u,2)*pow(v,2)*pow(w,2)) 
        	- pow(u,2)*pow((pow(v,2)+pow(w,2)-pow(U,2)),2) 
        	- pow(v,2)*pow((pow(w,2)+pow(u,2)-pow(V,2)),2) 
        	- pow(w,2)*pow((pow(u,2)+pow(v,2)-pow(W,2)),2) 
        	+ (
        		pow(v,2)+pow(w,2)-pow(U,2))*
        		(pow(w,2)+pow(u,2)-pow(V,2))*
        		(pow(u,2)+pow(v,2)-pow(W,2)
        	  );
        vol = sqrt(a);
        vol /= b;
      
      printf("%.4lf\n",vol);
   }	
   return 0;
}