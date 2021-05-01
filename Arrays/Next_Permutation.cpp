#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        bool check = next_permutation(nums.begin(),nums.end());
        if(check)
        {
            for(int i=0;i<nums.size();i++)
            {
                cout<<nums[i];
            }
        }
        else
        {
            sort(nums.begin(),nums.end());
            for(int i=0;i<nums.size();i++)
            {
                cout<<nums[i];
            }
        }
        
    }
};