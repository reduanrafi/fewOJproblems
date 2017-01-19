#include<iostream>
#include<stdio.h>
using namespace std;


int main()
{
    int a,b,c;
    int t,cs=0;
    cin>>t;
    while(t--){
    cin>>a>>b>>c;
    if(a>b&&b>c||a<b&&b<c)
        cout<<"Case "<<++cs<<": "<<b<<endl;
    if(b>a&&a>c||b<a&&a<c)
        cout<<"Case "<<++cs<<": "<<a<<endl;
    if(a>c&&c>b||a<c&&c<b)
        cout<<"Case "<<++cs<<": "<<c<<endl;
    }

    return 0;

}
