#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c,mx,mn,sum,sum1,cs=0;
    int t;
    cin>>t;
    while(t--)

    {
        sum=sum1=0;
        scanf("%d%d%d",&a,&b,&c);
        sum=a+b+c;

            mx=max(a,b);
            mx=max(mx,c);
            mn=min(a,b);
            mn=min(mn,c);
        sum1=mx+mn;
       cout<<"Case "<<++cs<<": "<<sum-sum1<<endl;

    }
    return 0;
}
