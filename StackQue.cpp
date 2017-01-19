#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<stdlib.h>
using namespace std;
#define MAX 5
int top, status;

void push(int a[],int data)
{
    if (top == (MAX-1))
	status = 0;
    else
    {   status = 1;
        top=top+1;
	a[top] = data;
    }


}

void display (int a[])
{   int i;
    printf ("\nThe stake is: ");
    if (top == -1)
	printf ("empty");
    else
    {   for (i=top; i>=0; --i)
	   printf ("%3d",a[i]);
    }
    printf ("\n");
}


int main()
{
    int n,a[MAX],i;
    cout<<"Enter the numbers of element you want to insert \n";
    cin>>n;
    while(n--){
        cin>>i;
        push(a , i);
         display(a);
    }
    cout<<"the stake is "<<endl;
    for(i=0;i<n;i++){

    }
    //cout<<push(40)<endl;

}
