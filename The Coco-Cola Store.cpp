#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum,ans,i;
    while(scanf("%d",&n)==1)
    {
        if(n==0) break;
        ans=0;
       while(n>=3)
       {
           n=n-3;
           ans++;
           n+=1;
       }
       if(n==2) ans+=1;

       cout<<ans<<endl;


    }

    return 0;
}

