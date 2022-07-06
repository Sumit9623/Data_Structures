#include <bits/stdc++.h>
using namespace std;
// this is program for heap sort
// In heap sort there are mainly two steps
// 1) creating a heap by inserting elements in heap   
// 2) Deleting all elements from heap gives sorted array
// Time complexity for Creating heap O{nlog(n)}
// Time Complexity for Deleting heap O{nlog(n)}
// Therefore total time 2*nlog(n) 
// Therefore Time complexity is nlog(n)

void swap(int &a, int &b)
{
    int temp = a;
    a=b;
    b=temp;
}
void createheap(int arr[],int n)    // Function to create heap from array
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0)
        {
            if(j%2==0)
            {
                if(arr[j]>arr[(j-1)/2]) swap(arr[j],arr[(j-1)/2]);
                j=(j-1)/2;
            }
            else
            {
                if(arr[j]>arr[j/2]) swap(arr[j],arr[j/2]);
                j=j/2;
            }
        }
    }

}

void deleteheap(int arr[],int n)   //Function to delete elements sequentially gives sorted array
{
    for(int i=0;i<n;i++)
    {
        swap(arr[0],arr[n-i-1]);
        int j=0;
        while((2*j+2)<(n-i-1))
        {
            if(arr[2*j+1]>arr[2*j+2] )
            {
                if(arr[j]<arr[2*j+1])
                {
                    swap(arr[j],arr[2*j+1]);
                }
                j=2*j+1;
            }
            else
            {
                if(arr[j]<arr[2*j+2])
                {
                    swap(arr[j],arr[2*j+2]);
                }
                j=2*j+2;
            }
            for(int i=0;i<n;i++)
            {
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        cout<<"end"<<endl;
    }
}
int main()
{
    int n;
    cout<<"Enter no of elements in array : "<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    createheap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    deleteheap(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}