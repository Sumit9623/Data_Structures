#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {7, 10, 4, 3, 20, 15};
    int k;
    cout<<"Enter value of k : ";
    cin>>k;
    sort(arr,arr+((sizeof(arr))/4));
    cout<<arr[k-1]<<endl;
    return 0; 
}