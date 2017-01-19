#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,total=0,donate=0;
    string check;
    cin>>t;
    while(t--)
    {
        cin>>check;
        if(check=="donate")
        {
            cin>>donate;
            total+=donate;
        }
        else{cout<<total<<endl;}
    }
}
