// Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

//  - Integers in each row are sorted from left to right.
//  - The first integer of each row is greater than the last integer of the previous row.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,c,t,k;
    cin>>r>>c>>k;
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
    // implement binary search
    int n = v.size();
    int m = v[0].size();
    int low,high;
    low = 0;
    high = (n*m) - 1;
    while(low<=high)
    {
        int mid = (low+(high-low))/2;
        if(v[mid/m][mid%m]==k)
        {
            cout<<"found = "<<mid/m<<","<<mid%m;
            break;
        }
        else if(v[mid/m][mid%m]<k)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}