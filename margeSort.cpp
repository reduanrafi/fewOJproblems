#include<iostream>
#include<stdio.h>
using namespace std;
void ms(int [],int ,int  , int  );
void par(int lst[],int low ,int high )
{int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        par(lst,low,mid);
        par(lst,mid+1,high);
        ms(lst,low,mid,high);
    }
}
void ms(int lst[],int low,int mid , int high )
{
    int i,mi,k,l,temp[500];
    i=low;
    l=low;
    mi=mid+1;
    while((l<=mid) && (mi<=high))
    {
        if(lst[l]<=lst[mi])
        {
            temp[i]=lst[l];
            l++;
        }
        else{
            temp[i]=lst[mi];
            mi++;
        }
        i++;
    }
    if(l>mid)
    {
        for(k=mi;k<=high;k++)
        {
            temp[i]=lst[k];
            i++;
        }


    }
    else
    {
        for(k=l;k<=mid;k++)
        {
            temp[i]=lst[k];
            i++;
        }


    }
     for(k=low;k<=high;k++)
        {
            lst[k]=temp[k];

        }

}

int main()
{
    int lst[500];
    int i,siz;
    cout<<"Enter the number of elements"<<endl;
    cin>>siz;
    cout<<"Enter the array elements"<<endl;
    for(i=0;i<siz;i++)
    {
        cin>>lst[i];
    }
    par(lst,0,siz-1);
    cout<<"------------after sorting ----------"<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<lst[i]<<endl;
    }



return 0;
}
