#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int i,flag=0;
        int temp=nums[nums.size()-1];
        for(i=nums.size()-1;i>0;i--)
        {
            if(nums[i-1]>nums[i])
            {
                nums[i]=nums[i-1];
            }
            else
            {
                nums[i]=nums[i-1];
                nums[i-1]=temp;
                flag=1;
                break;
            }
        }
        if(i==1)
        {
            int temp1=nums[0];
            
        }
        cout<<"Flag = "<<flag<<endl;
        if(flag==0)
        {
            nums[0]=temp;
            sort(nums.begin(),nums.end());
        }
    }
};
int main()
{
    Solution s;
    vector<int> arr{2,3,1};
    s.nextPermutation(arr);
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0; 
}