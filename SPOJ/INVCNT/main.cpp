#include <bits/stdc++.h>
using namespace std;
#define LL long long int
LL ans=0;
LL arr[200005];
void merge(LL arr[],LL lo,LL mid,LL hi)
{
    LL i, j, k;
    LL n1 = mid - lo + 1;
    LL n2 =  hi - mid;

    /* create temp arrays */
    int L[n1], R[n2];

    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++)
        L[i] = arr[lo+i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid +1+ j];

    i = 0; // Initial index of first subarray
    j = 0; // Initial index of second subarray
    k = lo; // Initial index of merged subarray
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            ans+=n1-i;
            j++;
        }
        k++;
    }
       /* Copy the remaining elements of L[], if there
       are any */
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    /* Copy the remaining elements of R[], if there
       are any */
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

/* l is for left index and r is right index of the
   sub-array of arr to be sorted */
void mergeSort(LL arr[], LL lo, LL hi)
{
    if (lo < hi)
    {
        // Same as (l+r)/2, but avoids overflow for
        // large l and h
        LL mid = lo+(hi-lo)/2;

        // Sort first and second halves
        mergeSort(arr, lo, mid);
        mergeSort(arr, mid+1, hi);

        merge(arr, lo, mid,hi);
    }
}

/* Driver program to test above functions */
int main()
{   ios_base::sync_with_stdio(false);
    LL i,d,n,test,t=0;
    cin>>test;
    while(test--)
    {
        ans=0;
        cin>>n;
        for(i=0;i<n;i++)
        cin>>arr[i];
        mergeSort(arr,0,n-1);
        cout<<ans<<endl;
    }
    return 0;
}
