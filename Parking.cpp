#include<iostream>
#include<stdio.h>
#include<algorithm>
#define sze 100
using namespace std;
int main()
{
    int t,n,mn=0,mx=99,store;
    int a[sze];
    cin>>t;
    while(t--)
    {
        cin>>store;
        for(int i=0;i<store;i++)
        {
            cin>>a[i];
        }
        sort(a,a+store);
            sort(a,a+store);
            cout<<(a[store-1]-a[0])*2<<endl;
    }
    return 0;
}
