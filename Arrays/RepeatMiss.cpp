#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        m[a]++;
    }
    for(int i=1;i<=n;i++)
    {
        if(m.find(i)==m.end())
        {
            cout<<i<<" ";
        }
    }
    for(auto x:m)
    {
        if(x.second>1)
        {
            cout<<x.first;
        }
    }
}