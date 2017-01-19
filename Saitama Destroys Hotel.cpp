#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s,f[100],t[1001],i;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
    }
    int time=0;
    int j=n;
    for(i=n-1;i>=0;i--)
    {

        time+=1;
        if(t[i]>time)
        {
            time=t[i]-time;
            cout<<time<<endl;
        }

    }
    cout<<time<<endl;
    return 0;
}
