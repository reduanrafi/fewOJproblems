#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int d;
    string f,s,m="month";
    cin>>d>>f>>s;
    if(s==m)
    {
        if(d==30) cout<<11<<endl;
        else if (d==31) cout<<7<<endl;
        else cout <<12<<endl;
    }
    else {
        if(d==5 || d==6)
            cout<<53<<endl;
        else  cout<<52<<endl;

    }
    return 0;
}
