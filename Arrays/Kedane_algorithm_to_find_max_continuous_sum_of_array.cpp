// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

//   GFG question : kadane's Algorithm

 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {
        long long int maxans=INT_MIN, sum=0;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
            if(sum>maxans) maxans=sum;
            if(sum<0) sum=0;
        }
        return maxans;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends