#include<bits/stdc++.h>
using namespace std;
int LastOccurence(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int ans=-1;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==key)
        {
            ans=mid;
            i=mid+1;
        }
        else if(a[mid]<key)
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int FirstOccurence(int *a,int n,int key)
{
    if(n==0)
    {
        return -1;
    }
    int ans=-1;
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==key)
        {
            ans=mid;
            j=mid-1;
        }
        else if(a[mid]<key)
        {
            i=mid+1;
        }
        else{
            j=mid-1;
        }
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<FirstOccurence(a,n,key)<<endl;
    cout<<LastOccurence(a,n,key);
    return 0;
}