#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int a,b,c=0,ans=0;
    cin>>a>>b;
    ans = a;
     while(b>0){
        c=a/b;
        ans=ans+c;
        b=c;
     cout<<b<<c;
     }

    cout<<ans;
    return 0;
}
