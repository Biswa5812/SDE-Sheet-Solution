#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        vector<int> temp;
        for(int j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                temp.push_back(1);
            }
            else
            {
                int a = v[i-1][j-1] + v[i-1][j];
                temp.push_back(a);
            }
        }
        v.push_back(temp);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}