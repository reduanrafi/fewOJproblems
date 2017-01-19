#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main()
{
    long long n,x=8,t=0;
    double n2;
    while(t<=10)
    {
        n2=sqrt((x*x+x)/2);
        n=n2;
        if(n==n2)
        {
            printf("%10lld%10lld\n",n,x);
            t++;
        }
        if(t==10)
            break;
            x++;
    }
    return 0;
}
