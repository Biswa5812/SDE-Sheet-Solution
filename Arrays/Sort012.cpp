#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a;
    cin>>n;
    vector<long long int> v;
    for(long long int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    int low = 0;
        int mid = 0;
        int high = v.size()-1;
        while(mid<=high){
            if(v[mid]==0){                     
                swap(v[mid],v[low]); 
                low++;
                mid++;
            }else if(v[mid]==1){
                mid++;
            }else{
                swap(v[mid],v[high]);
                high--;
            }
        }
}