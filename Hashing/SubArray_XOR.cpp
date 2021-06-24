// Given an array of integers arr[] and a number m, count the number of subarrays having XOR of their elements as m.
// Input : arr[] = {4, 2, 2, 6, 4}, m = 6
// Output : 4
// Explanation : The subarrays having XOR of 
//               their elements as 6 are {4, 2}, 
//               {4, 2, 2, 6, 4}, {2, 2, 6},
//                and {6}

// Input : arr[] = {5, 6, 7, 8, 9}, m = 5
// Output : 2
// Explanation : The subarrays having XOR of
//               their elements as 5 are {5}
//               and {5, 6, 7, 8, 9}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,a;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    // important logic
    // calculate prefix XOR, then Y = XR ^ M, Look for Y in hash

    map<int,int> f;
    int cnt = 0;
    int xr = 0;
    for(auto it:v)
    {
        xr = xr^it;
        if(xr==m)
        {
            cnt++;
        }
        if(f.find(xr^m)!=f.end())
        {
            cnt+=f[xr^m];
        }
        f[xr]++;
    }
    cout<<cnt;
}