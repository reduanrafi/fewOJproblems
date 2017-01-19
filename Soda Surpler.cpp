#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int t,e,f,c,bound;
    cin>>t;
    while(t--)
    {
        int ans=0;
        int cary=0;
        cin>>e>>f>>c;
        bound=e+f;
        while(bound>=c)
        {
            ans+=bound/c;
              bound=(bound/c)+(bound%c);

        }

        cout<<ans<<endl;
    }
}
