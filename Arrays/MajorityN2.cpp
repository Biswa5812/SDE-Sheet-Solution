// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array
// Example 1:

// Input: nums = [3,2,3]
// Output: 3
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        unordered_map<int,int> umap;
        int j;
        for(j=0;j<nums.size();j++)
        {
                 umap[nums[j]]++;
        }
        for(auto x:umap)
        {
            if(x.second>nums.size()/2)
            {
                return x.first;
            }
        }
       return 0;
    }
};