#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,s,f[100],t[1000];
    int i,time=0;
    cin>>n>>s;
    for(i=0;i<n;i++)
    {
        cin>>f[i]>>t[i];
    }
    for(i=s;i>=0;i--)
    {
        time+=1;
        for(int j=n-1;j>=0;j--)
        {
            if(t[j]>time)
                time=t[j]-time;
                 cout<<time<<endl;
        }
    }

    return 0;
}
