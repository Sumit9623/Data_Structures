#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
int main() 
{
    int n;
    cin>>n;
    int low=0,high=n-1;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    while(low<=high)
    {
        if(arr[high]<0 && arr[low]>=0) swap(arr[high],arr[low]);
        if(arr[low]<0) low++;
        if(arr[high]>=0) high--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}