#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    long long a,l,c,i,cs=0;
    while(scanf("%lld %lld",&a,&l)==2)
    {
        if(a<0&&l<0)
                {
                    break;
                }

            i=a;
            c=0;
        while(a<=l)
        {
            if(a==1)
            {
                c++;
                break;
            }
            else if(a%2==0)
                {
                    c++;
                    a/=2;
                }
            else if(a%2==1)
                {
                    c++;
                    a=a*3+1;
                }
        }
          cout<<"Case "<<++cs<<": "<<"A = "<<i<<", limit = "<<l<<", number of terms = "<<c<<endl;

    }
}
