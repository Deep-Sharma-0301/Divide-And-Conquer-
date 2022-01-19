#include<bits/stdc++.h>
using namespace std;
double SquareRoot(int n,int p)
{
    int s=0;
    int e=n;
    double ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(mid*mid==n)
        {
            ans=mid;
            break;
        }
        else if(mid*mid<n)
        {
            ans=mid;
            s=mid+1;
        }
        else
        {
            e=mid-1;
        }
    }
    float inc=0.1;
    for(int i=0;i<p;i++)
    {
        while(ans*ans<=n)
        {
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<SquareRoot(n,3);
    return 0;
}