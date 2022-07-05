#include <bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void insertionsort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
       int temp=arr[i];
       int j=i-1;
       while(j>=0 && temp<arr[j])
       {
           arr[j+1]=arr[j];
           j--;
       }
       arr[j+1]=temp;
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
    insertionsort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}