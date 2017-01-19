#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string s;
    int len=0,i;
    cin>>s;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++)
    {
        if(s[i]!=s[i+1])
        {
            len++;
        }
    }

    if(len%2==0)
    {
       cout<<"CHAT WITH HER!"<<endl;
    }
    else  cout<<"IGNORE HIM!"<<endl;
    return 0;
}
