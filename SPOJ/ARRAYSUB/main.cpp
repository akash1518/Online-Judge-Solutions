//http://www.spoj.com/problems/ARRAYSUB/
//Author - Akash, IIT(ISM)
//@akash1518
#include <bits/stdc++.h>
#define N 100005
int tree[4*N];
int A[N];
using namespace std;
void build(int node, int start, int end)
{
    if(start == end)
    {
        // Leaf node will have a single element
        tree[node] = A[start];
    }
    else
    {
        int mid = (start + end) / 2;
        // Recurse on the left child
        build(2*node, start, mid);
        // Recurse on the right child
        build(2*node+1, mid+1, end);
        // Internal node will have the sum of both of its children
        tree[node] = max(tree[2*node],tree[2*node+1]);
    }
}
int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        // range represented by a node is completely outside the given range
        return 0;
    }
    if(l <= start and end <= r)
    {
        // range represented by a node is completely inside the given range
        return tree[node];
    }
    // range represented by a node is partially inside and partially outside the given range
    int mid = (start + end) / 2;
    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);
    return max(p1,p2);
}

int main()
{  int n,k;
   cin>>n;
   for(int i=0;i<n;i++) cin>>A[i];
   cin>>k;
   build(1,0,n-1);
   int l=0,r=k;
   while(r<=n)
   {
       int ans=query(1,0,n-1,l,r-1);
       r++;
       l++;
       cout<<ans<<" ";
   }

    return 0;
}
