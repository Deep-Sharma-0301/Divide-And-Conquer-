#include<bits/stdc++.h>
using namespace std;

bool jobdone(int a[],int n,int p,int mid)
{
    int lastwall=a[0];
    int painter=1;
    for(int i=1;i<n;i++)
    {

        if(lastwall+a[i]>mid)
        {
            painter++;
            lastwall=a[i];
            if(painter>p)
            {
                return false;
            }
        }
        else{
            lastwall+=a[i];
        }
    }
    return true;
}


int main()
{
    int n;
    cin>>n;
    int p;
    cin>>p;
    int time;
    cin>>time;
    int a[100000];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        a[i]=a[i]*time;
        sum+=a[i];

    }

    sort(a,a+n);
    if(n<p)
    {
        return 0;
    }
    int s=a[n-1];
    int e=sum;
    int ans=-1;
    while(s<=e)
    {
        int mid=(s+e)/2;
        bool kaamhua=jobdone(a,n,p,mid);
        if(kaamhua)
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans;
    return 0;

}