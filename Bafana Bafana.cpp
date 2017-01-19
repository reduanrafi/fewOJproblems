#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,n,k,p,bound,cs=0;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>p;
        bound=p+k;
        while(bound>n)
        {
            bound=bound-n;
        }
        cout<<"Case "<<++cs<<": "<<bound<<endl;
    }
    return 0;
}
