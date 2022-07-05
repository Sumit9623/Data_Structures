#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
 // This function is to sort arr of 0, 1, 2 with using sorting algo 
 //with time complexity O[n].
void sort012(int arr[],int n)  
{
    int low=0,mid=0,high=n-1;
    while(mid<=high)
    {
        if(arr[low]>arr[mid]) swap(arr[low],arr[mid]);
        if(arr[mid]>arr[high]) swap(arr[mid],arr[high]);
        if(arr[low]>arr[high]) swap(arr[low],arr[high]);
        if(arr[low]==0) low++; 
        if(arr[high]==2) high--;
        if(arr[mid]<2) mid++;
    }
    if(arr[low]==1) swap(arr[low],arr[low+1]);
    cout<<low<<" "<<mid<<" "<<high<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}