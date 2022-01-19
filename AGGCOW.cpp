#include<bits/stdc++.h>
using namespace std;
bool cowsPlaced(int a[], int n,int cows, int dist)
{
    int lastcow=a[0];  //place teh fisrt cow in first place
    int count=1;
    for(int i=1;i<n;i++)
    {
        if((a[i]-lastcow)>=dist)
        {
           count++;
           lastcow=a[i];
           if(count==cows)
           {
            return true;
           }
        
         }
    }
    return false;
}

int main()
{

        int n;
        cin>>n;
		int cows;
        cin>>cows;
        int a[1000];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int s=0;
        int ans=0;
        int e=a[n-1]-a[0];
        while(s<=e)
        {
            int mid=(s+e)/2;
            bool cowsRakhPaye=cowsPlaced(a,n,cows,mid);
            if(cowsRakhPaye)
            {
                ans=mid;
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
        cout<<ans<<endl;
    
    return 0;

}