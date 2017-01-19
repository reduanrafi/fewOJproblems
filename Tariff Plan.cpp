#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,tp,cal[2001],cou=0;;
    int v,v1;
    cin>>t;
    while(t--)

    {
        v=v1=0;
        cin>>tp;
        for(int i=1;i<=tp;i++)
        {
            cin>>cal[i];

            v+=(cal[i]+30)/30;
            v1+=(cal[i]+60)/60;

        }
        v=v*10;
        v1=v1*15;
         if(v<v1)
      {
          printf("Case %ld: Mile %ld\n",++cou,v);
      }
      else if(v1 == v)
      {
         printf("Case %ld: Mile Juice %ld\n",++cou,v1);
      }
      else if(v1<v)
      {
          printf("Case %ld: Juice %ld\n",++cou,v1);
      }

    }
    return 0;
}
