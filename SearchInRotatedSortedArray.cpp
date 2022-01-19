#include<bits/stdc++.h>
using namespace std;
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
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]==key)
        {
            cout<<mid;
            break;
        }
        else if(a[i]<a[mid])//this means our mid lies in first strinctly increasing segment
        {
            if(a[mid]>key and a[i]<key)
            {
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        else if(a[mid]<a[j])
        {
            if(a[mid]<key and key<a[j])
            {
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
    }
    return 0;
}