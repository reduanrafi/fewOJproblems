#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int sum,n,i,c=0;
    bool check;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%d",&n),n){
            check=false;
            sum=0;

        for(i=1;i<n;i++)

        {
            if(n%i==0)
            sum=sum+i;
            if(sum>n){

                check=true;
                break ;
            }

        }
        printf("%5d  ", n);
        if(check)
            printf("ABUNDANT\n");
        else if(sum==n)
            printf("PERFECT\n");

            else
                printf("DEFICIENT\n");

    }
    printf("END OF OUTPUT\n");
    return 0;
}
