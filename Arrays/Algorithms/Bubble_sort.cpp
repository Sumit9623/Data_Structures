#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void bubblesort(int arr[],int n)
{
    for(int j=n-1;j>0;j--)
    {
        for(int i=0;i<j;i++)
        {
            if(arr[i]>arr[i+1]) swap(arr[i],arr[i+1]);
        }
    }
}
int main()
{
    int n;
    cout<<"Enter no of elements in array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elememts in array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bubblesort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}