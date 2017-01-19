#include<iostream>
#include<stdio.h>
using namespace std;
void selection(int n,int lst[])
{
    int i,j,m,temp;
    for(i=0;i<n;i++)
    { m=i;
        for(j=i+1;j<n;j++)
        {
            if(lst[j]<lst[m])
            {
                m=j;
            }
            temp=lst[i];
            lst[i]=lst[m];
            lst[m]=temp;
        }
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
    cout<<"------------Before sorting ----------"<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<lst[i]<<endl;
    }

    selection(siz,lst);
    cout<<"------------after sorting ----------"<<endl;
    for(i=0;i<siz;i++)
    {
        cout<<lst[i]<<endl;
    }



return 0;
}
