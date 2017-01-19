#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int s,p,q;
    string st;
    cin>>s>>p>>q;
    cin>>st;
    int m=min(p,q);
    int answer=s/m;
    cout<<answer;
    for(int i=0;i<m;i++)
    {
        cout<<st<<endl;
    }
    for(int i=s;i>m;i++)
    {
        cout<<st<<endl;
    }
    return 0;
}
