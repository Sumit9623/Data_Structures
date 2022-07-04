#include <bits/stdc++.h>
using namespace std;
void reversearray(int arr[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=temp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};  
    int size= sizeof(arr)/4;
    reversearray(arr,size);
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}
