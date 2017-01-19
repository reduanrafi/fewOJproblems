#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
   long int a,b,m,l,mod1,mod2;
   int cnt,cont,c;
   while(scanf("%lu %lu",&a,&b)&&a!=0&&b!=0)
    {

         m=max(a,b);
         l=0;

        while(m!=0)
        {
            m/=10;
            l++;
        }
        cnt=c=0;

           while(l!=0)
           {
               mod1=a%10;
               mod2=b%10;
                a=a/10;
                b=b/10;
                cont=mod1+mod2+c;

                if(cont>9)
                {
                    cnt++;
                    cout<<"cnt="<<cnt<<endl;
                    cout<<"cont" <<cont<<endl;
                    c=cont/10;
                }
                else c=0;
                l--;
            }



       if(cnt==0)
        cout<<"No carry operation."<<endl;
        else if(cnt==1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<cnt<<" carry operations."<<endl;

    }
    return 0;

}
