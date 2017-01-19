#include<iostream>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,a[501],median,n,i,ans;
    cin>>t;
    while(t--)
    {   median=0;
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        median=a[n/2];
        ans=0;
        for(i=0;i<n;i++)
        {
            ans+=abs(median-a[i]);
        }
        cout<<ans<<endl;
    }
return 0;
}
