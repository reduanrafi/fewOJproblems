#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
    int n,t,t1,fibo,i;
    while(cin>>n)
    {
        t=0;
        t1=1;
        fibo=0;
        i=2;
        while(i<=n)
        {
            fibo=t+t1;
            t=t1;
            t1=fibo;
            i++;

        }
        cout<<"The Fibonacci number for "<<n<<" is "<<fibo<<endl;
    }
    return 0;
}
