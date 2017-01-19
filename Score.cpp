#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,i,n,c;
    string a;
    cin>>t;
    while(t--)
    {
        c=0;
        n=0;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            n=n+c;
            if(a[i]=='O')
                c+=1;
            else c=0;
        }
        n=n+c;
        cout<<n<<endl;
    }
}
