#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int msf = INT_MIN,meh = 0;
    for(int i=0;i<v.size();i++)
    {
        meh+=v[i];
        if(msf<meh)
        {
            msf = meh;
        }
        if(meh<0)
        {
            meh = 0;
        }
    }
    cout<<msf;
}

// msf = max so far.
// meh = max end here.