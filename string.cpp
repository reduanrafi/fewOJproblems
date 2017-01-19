#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int main()
{
    string s,s1;
    cin>>s>>s1;
    strcat(s,s1);
    cout<<s;
    return 0;
}
