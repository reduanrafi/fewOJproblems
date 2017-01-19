#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int c=1;
    string s;
    while(true){

        cin>>s;
        if(s=="*") break;
        if(s=="Hajj")
            printf("Case %d: Hajj-e-Akbar\n",c++);
        if(s=="Umrah")
            printf("Case %d: Hajj-e-Asghar\n",c++);
    }
    return 0;
}
