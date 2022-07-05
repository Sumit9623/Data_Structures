#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)  // swap function
{
    int temp=a;
    a=b;
    b=temp;
}
void Selectionsort(int arr[],int n)  // selection sort function 
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j]) swap(arr[i],arr[j]);
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
    Selectionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}