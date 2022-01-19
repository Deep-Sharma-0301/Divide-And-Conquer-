//a pivot element have smaller values than itself in next and previous indexes

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int mid=(i+j)/2;
        if(a[mid]>a[mid+1] and mid<j)
        {
            cout<<mid<<endl;
            break;
        }
        if(a[mid]<a[mid-1] and mid>i)
        {
            cout<<mid-1<<endl;
            break;
        }
        else if(a[mid]<=a[i])//this means that the left side array is not sorted and pivot element is always present in unsorted array
        {
            j=mid-1;
        }
        else{//this means that the right side array is not sorted and pivot element is always present in unsorted array
            i=mid+1;
        }
    }
    return 0;
}