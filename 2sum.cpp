// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Output: Because nums[0] + nums[1] == 9, we return [0, 1]

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a;
    cin>>n>>k;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        int t = k-v[i];
        if(m.find(t)!=m.end())
        {
            cout<<m[t]<<" "<<i;
        }
        m[v[i]] = i;
    }
}