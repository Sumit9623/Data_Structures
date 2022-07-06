#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        vector <int> arr;
        int n =nums.size();
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]+nums[j]==target)
                {
                    arr.push_back(i);
                    arr.push_back(j);
                    break;
                }
            }
        }
        
        return arr;
    }
};
int main()
{
    vector <int> arr;
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(0);
    arr.push_back(3);
    Solution s;
    s.twoSum(arr,0);
    return 0; 
}
