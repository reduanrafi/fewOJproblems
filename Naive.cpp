#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    string s,p;
    int i,j;
    cout<<"Enter the string"<<endl;
    cin>>s;
    cout<<"Enter the Pattern"<<endl;
    cin>>p;
    for(i=0;i<s.size();i++)
    {
        for(j=0;j<p.size();j++)
        {
            if(s[i+j]!=p[j])
                break;
        }
        if(j==p.size())
            cout<<"Pattern Found at  "<<i+1<<"th  position"<<endl;
    }
    return 0 ;
}
