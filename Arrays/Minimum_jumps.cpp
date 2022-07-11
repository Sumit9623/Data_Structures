#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int i=0,flag=0,pre=0;
        int count=0;
        while(i<n)
        {
            if(arr[i]==0) return -1;
            else
            {
                int j=i;
                while(j<arr[i]+i)
                {
                    if(arr[j]==0)
                    {
                        flag=1;
                        count++;
                        break;
                    } 
                    j++;
                }
                if(flag) break;
                count++;
                i=i+arr[i];
                // cout<<"i = "<<i<<"  "<<"arr[i] = "<<arr[i]<<endl;
            }  
        }
        return count;
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}