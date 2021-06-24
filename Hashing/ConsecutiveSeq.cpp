// Given an unsorted array of integers nums, return the length of the longest consecutive elements sequence.
//  O(n) approach
// Input: nums = [100,4,200,1,3,2]
// Output: 4
// Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

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
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(v[i]);
    }
    int max_c = 0;
    for(int i=0;i<v.size();i++)
    {
        if(!s.count(v[i]-1))
        {
            int pos = v[i];
            int c = 1;
            while(s.count(pos+1))
            {
                c++;
                pos+=1;
            }
            max_c = max(max_c,c);
        }
    }
    cout<<max_c;
}