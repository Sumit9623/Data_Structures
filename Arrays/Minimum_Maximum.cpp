#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,5,6,21,3,7,99,426,126}; 
    int min=INT_MAX,max=INT_MIN;
    for(int i=0;i<(sizeof(arr)/4);i++)
    {
        if(arr[i]<min) min=arr[i]; 
        if(arr[i]>max) max= arr[i];
    }
    cout<<min<<"   "<<max<<endl;
    return 0; 
}