#include<bits/stdc++.h>
using namespace std;
bool parathe(int * a,int p,int mid,int n)
{
    int count=0;//Total pratas
    for(int i=0;i<n;i++)
    {
        int PrataTillNow=1;
        int time=a[i]*PrataTillNow;
        while(time<=mid)
        {
            PrataTillNow++;
            count++;
            time+=a[i]*PrataTillNow;
        }
    }
    if(count>=p)
    {
        return true;
    }
    return false;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int p;
        cin>>p;
        int n;
        cin>>n;
        int a[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int j=0;
        for(int i=0;i<=p;i++)
        {
            j+=i;
        }
        int ans=-1;
        while(i<=j)
        {
            int mid=(i+j)/2;
            bool bangye=parathe(a,p,mid,n);
            if(bangye)
            {
                ans=mid;
                j=mid-1;
            }
            else
            {
                i=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}