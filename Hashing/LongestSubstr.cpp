// Given a string s, find the length of the longest substring without repeating characters.
// Example 1:

// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
// Example 2:

// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
// Example 3:

// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    vector<int> v(256,-1);
    int r=0,l=0;
    int len = 0;
    while(r<s.size())
    {
        if(v[s[r]]!=-1)
        {
            l = max(v[s[r]]+1,l);
        }
        v[s[r]] = r;
        len = max(len,r-l+1);
        r++;                                                                                    
    }
    cout<<len;
}