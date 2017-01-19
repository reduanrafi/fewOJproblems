#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
    double d,u,v;
    int tc,cs=1;
    double t,t1,t2;
    cin>>tc;
    while(tc--)
    {

        cin>>d>>v>>u;
        if(v>=u||v==0||u==0)
        {
            printf("Case %d: can't determine\n",cs++);
            continue;


        }
        else
        {
            t1=d/u;
            t2=d/sqrt(u*u-v*v);
            t=fabs(t2-t1);
            printf("Case %d: %.3lf\n",cs++,t);
        }

    }
      return 0;
}
