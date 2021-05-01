// You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).
// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

// 1 2 3              7 4 1
// 4 5 6     ====>    8 5 2   
// 7 8 9              9 6 3

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,t;
    cin>>r>>c;
    vector<vector<int>> v;
    for(int i=0;i<r;i++)
    {
        vector<int> a;
        for(int j=0;j<c;j++)
        {
            cin>>t;
            a.push_back(t);
        }
        v.push_back(a);
    }
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<i;j++)
        {
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<r;i++)
    {
        reverse(v[i].begin(),v[i].end());
    }
    for(int i=0;i<r;i++) 
    {
        for(int j=0;j<c;j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}