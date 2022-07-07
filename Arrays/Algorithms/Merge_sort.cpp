#include <bits/stdc++.h>
using namespace std;
// merge function is for dividing array in two parts and 
// merging them
void merge(int* arr,int l,int r)  
{
    int ln,rn,mid;
    mid=(l+r)/2;
    ln=mid-l+1;
    rn=r-mid;
    int arrl[ln],arrr[rn];
    for(int i=0;i<ln;i++)
    {
        arrl[i]=arr[l+i];
    }
    for(int i=0;i<rn;i++)
    {
        arrr[i]=arr[mid+1+i];
    }
    int i=0,j=0,k=l;
    while(i<ln && j<rn)
    {
        if(arrl[i]<=arrr[j])
        {
            arr[k]=arrl[i];
            i++;
        }
        else
        {
            arr[k]=arrr[j];
            j++;
        }    
        k++;
    }
    while(i<ln)
    {
        arr[k]=arrl[i];
        i++;k++;
    }
    while(j<rn)
    {
        arr[k]=arrr[j];
        k++;j++;
    }   
}

// mergesort function use recursion to divide array 
// upto 1 element then apply merge operation on each. 
void mergesort(int * arr,int l,int r)
{
    int m=(l+r)/2;
    if(l<r)
    {
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge(arr,l,r);
    }
}
int main()
{
    int m=6;
    int b[]={1,30,2,15,73,76,92};
    mergesort(b,0,m-1);
    for(int i=0;i<m;i++)
    {
        cout<<b[i]<<endl;
    }
    return 0; 
}