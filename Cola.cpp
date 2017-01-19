#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,sum,ans;
    while(cin>>n)
    {
        ans=sum=0;
       /*if(n%3==0)
        {
            ans=n/3;
            sum=n+ans;
        }
        else if (n%3==1)
        {
            n=n+2;
            ans=n/3;
            sum=n+ans;
        }

       else if(n%3==2)
       {
           n=n+1;
           ans=n/3;
           sum=n+ans;
       }
       cout<<sum<<endl;*/
        cout<<n-n/3<<endl;
    }
    return 0;
}
