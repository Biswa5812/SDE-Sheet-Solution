// Given an array nums of n integers, return an array of all the unique quadruplets [nums[a], nums[b], nums[c], nums[d]] such that:
// nums[a] + nums[b] + nums[c] + nums[d] == target

// Input: nums = [1,0,-1,0,-2,2], target = 0
// Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a;
    cin>>n>>k;
    vector<int> nums;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        nums.push_back(a);
    }
    vector<vector<int>> vec;
    sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int tar = k - nums[i] - nums[j];
                int left = j+1;
                int right = nums.size()-1;
                while(left<right)
                {
                    int ts = nums[left] + nums[right];
                    if(ts<tar)
                    {
                        left++;
                    }
                    else if(ts>tar)
                    {
                        right--;
                    }
                    else
                    {
                        vector<int> a;
                        a.push_back(nums[i]);
                        a.push_back(nums[j]);
                        a.push_back(nums[left]);
                        a.push_back(nums[right]);
                        vec.push_back(a);
                        while(left<right && nums[left]==a[2]) ++left;
                        while(left<right && nums[right]==a[3]) --right;
                    }
                }
                while(j+1<nums.size() && nums[j+1]==nums[j]) ++j;
            }
            while(i+1<nums.size() && nums[i+1]==nums[i]) ++i;
        }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec[i].size();j++)
        {
            cout<<vec[i][j];
        }
        cout<<endl;
    }
}