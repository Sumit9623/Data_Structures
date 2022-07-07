// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n)
    {
        int i=0,flag=0;
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
                        break;
                    } 
                    j++;
                }
                if(flag) break;
                i=i+arr[i];
                count++;   
            }
            
        }
        return count;
    }
};


// { Driver Code Starts.

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
  // } Driver Code Ends