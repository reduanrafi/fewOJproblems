#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,n,i,j,cont=0;
    cin>>n>>m;

        for(int k=1;k<=m*n;k++)
        {
                    cin>>i>>j;
                    if(i==1||j==1)
                    {
                        cont++;
                    }
        }


        cout<<cont;



    return 0;
}
