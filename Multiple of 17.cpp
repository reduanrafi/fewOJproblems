#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long  n;
    while(cin>>n)
    {
        if(n==0) break;
        if(n%17==0)
            cout<<1<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
