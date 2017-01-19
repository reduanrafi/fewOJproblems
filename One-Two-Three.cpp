#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    int t;char a[10];
    cin>>t;
    while(t--){

        cin>>a;
        if(strlen (a)==5){printf("3\n");}
        else{

            int cont=0;
            if(a[0]=='o') cont++;
            if(a[1]=='n') cont++;
            if(a[2]=='e') cont++;

            if(cont>=2)
                printf("1\n");
            else printf("2\n");

        }

    }
    return 0;
}
