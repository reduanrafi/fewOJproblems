#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
    int  a,b,i,c,cn;

    while(cin>>a>>b)
    {
        cn=0;
        if(a==0&&b==0)
            break;
        for(i=a;i<=b;i++)
        {
            c=sqrt(i);
            if(c*c==i)
            cn++;
        }
        cout<<cn<<endl;

    }
    return 0;
}
