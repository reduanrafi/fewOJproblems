#include<iostream>
using namespace std;

int main()
{
    long n,i,j,b1=0,b2=0,check;
    cin>>n;
   for(i=0;i<=n;i++)
        {
       cin>>j;
       if(j==25){
        b1+=1;
        //cout<<j<<b1<<endl;
       }
        if(j==50){

            b2+=1;
            b1-=1;
        }
        if(j==100){
            if(b2>0){

                b2--;
                b1--;
            }
            else{

                b1-=3;
            }

        }

        if(b1<0) goto r;//{check=0;}
   }
   r:
       cout<<b1<<endl;
       cout<<"NO";
       return 0;

   cout<<"YES";
    return 0;

    }
