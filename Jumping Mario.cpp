#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    int t,wn,a[100],cs=0;
    cin>>t;
    while(t--)
    {   int high=0;int low=0;
        cin>>wn;
        for(int i=0;i<wn;i++)
        {
            cin>>a[i];

        }
        for(int j=0;j<wn-1;j++){
            if(a[j]<a[j+1])
                high++;
            if(a[j]>a[j+1])
                low++;
            }


        cout<<"Case "<<++cs<<": "<<high<<" "<<low<<endl;

    }
    return 0;
}
