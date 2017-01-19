#include<iostream>
#include<stdio.h>
using namespace std;

void quicksort(int a[100],int first, int last)
{
    int pivo,i,j,temp;
    if(first<last)
    {
        pivo=first;
        i=first;
        j=last;
        while(i<j){
            while(a[i]<=a[pivo]&&i<last)
                i++;
            while(a[j]>a[pivo])
                j--;
            if(i<j){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }

        temp=a[pivo];
        a[pivo]=a[j];
        a[j]=temp;
        quicksort(a,first,j-1);
        quicksort(a,j+1,last);
    }
}


int main()
{
    int n,a[100],i;
    cout<<"Enter the Size of array"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    cout<<"After sorting"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
