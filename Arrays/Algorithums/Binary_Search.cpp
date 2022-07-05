#include <bits/stdc++.h>
using namespace std;
// there are mainly two types of searches in array
// 1) Linear search  :  simply using single loop
// 2) Binary search  :  array need to be sorted, based on divide and find
void binarysearch(int arr[], int n,int k)   // Itrerative method for binary search
{
    int left=0,right=n-1;
    int middle=(left+right)/2;
    while(left<=right)
    {
        int middle=(left+right)/2;
        if(k==arr[middle])
        {
            cout<<arr[middle]<<" found at index "<<middle<<endl;
            break;
        } 
        else if(k>arr[middle]) left=middle+1;
        else right=middle-1;
    }
}


void Rbinarysearch(int arr[],int n,int k,int left,int right) 
 // Recursive method for binary search
{
    if(left==right)
    {
        if(arr[left]==k) cout<<arr[left]<<" found at index "<<left<<endl;
        else cout<<"Number does not found "<<endl;
    }
    else
    {
        int middle=(left+right)/2;
        if(k>arr[middle]) Rbinarysearch(arr,n,k,middle+1,right);
        else Rbinarysearch(arr,n,k,left,middle);
    }
}

int main()
{
    int n=10;
    int arr[]={9,12,20,27,42,51,63,66,72,92};
    binarysearch(arr,n,63);
    Rbinarysearch(arr,n,27,0,9);
    return 0; 
}