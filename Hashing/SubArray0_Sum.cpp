// Given an array having both positive and negative integers. The task is to compute the length of the largest subarray with sum 0.
// Input:
// N = 8
// A[] = {15,-2,2,-8,1,7,10,23}
// Output: 5
// Explanation: The largest subarray with
// sum 0 will be -2 2 -8 1 7

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    map<int,int> m;
    int max_l = 0,sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum==0)
        {
            max_l = i+1;
        }
        if(v[i]==0 && max_l==0)
        {
            max_l = 1;
        }
        if(m.find(sum)!=m.end())
        {
            max_l = max(max_l,i-m[sum]);
        }
        else
        {
            m[sum] = i;
        }
    }
    cout<<max_l;
}