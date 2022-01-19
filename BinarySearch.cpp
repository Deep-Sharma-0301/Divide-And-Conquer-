#include<bits/stdc++.h>
using namespace std;
int  BinarySearch(int *a,int n,int key)
{
    if(n==0)
    {
        return 0;
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
            break;
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
    int a[1000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int key;
    cin>>key;
    cout<<BinarySearch(a,n,key);
    return 0;
}