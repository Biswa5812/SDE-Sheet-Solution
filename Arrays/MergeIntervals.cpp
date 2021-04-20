#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    vector<vector<int>> intervals;
    for(int i=0;i<n;i++)
    {
        vector<int> f;
        for(int j=0;j<2;j++)
        {
            cin>>a;
            f.push_back(a);
        }
        intervals.push_back(f);
    }
    // Solution:

    vector<vector<int>> merv;
    if(intervals.size()==0)
    {
        return 0;
    }
    sort(intervals.begin(),intervals.end());
    vector<int> temp = intervals[0];
    for(auto it:intervals)
    {
        if(it[0]<=temp[1])
        {
            temp[1] = max(it[1],temp[1]);
        }
        else
        {
            merv.push_back(temp);
            temp = it;
        }
    }
    merv.push_back(temp);
    for(int i=0;i<merv.size();i++)
    {
        for(int j=0;j<merv[i].size();j++)
        {
            cout<<merv[i][j]<<" ";
        }
        cout<<endl;
    }
}