// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x;
    cin>>x;
    int n;
    cin>>n;
    long long int h = n;
    double ans = 1.0;
    if(h<0) h*=-1;
    while(h)
    {
        if(h%2==0)
        {
            x = x * x;
            h/=2;
        }
        else
        {
            ans = ans * x;
            h-=1;
        }
    }
    if(n<0) ans = (double)1.0/(double)(ans);
    cout<<ans;
}
