#include <bits/stdc++.h>
using namespace std;
// this is program for array rotation
void arrayrotation(int arr[],int n,int k)
{
    while(k--)
    {
        int temp =arr[0];
        for(int i=1;i<7;i++)
        {
            arr[i-1]=arr[i];
        }
        arr[6]=temp;
    }
    
}
int main()
{
    int k,arr[]={1,2,3,4,5,6,7};  // k is the steps of rotation 
    cout<<"Enter value of k : "<<endl;
    cin>>k;
    arrayrotation(arr,7,k);
    for(int i=0;i<7;i++)
    {
        cout<<arr[i]<<"  ";
    }
    return 0; 
}