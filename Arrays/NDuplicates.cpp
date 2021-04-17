#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m[a]++;
    }
    for(auto x: m)
    {
        if(x.second>1)
        {
            cout<<x.first;
        }
    }
}