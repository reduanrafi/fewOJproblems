#include<iostream>
using namespace std;
int main()
{
long long n,k;
int i,j,c=0,a[100];
cin>>n>>k;
for(i=0;i<=n-1;i++){
    cin>>a[i];
    }
        for(j=0;j<n;j++){

            if ( a[k-1]<=a[j]&&a[k-1]+a[j]>0) c++;
        }
        cout<<c<<endl;
return 0;

}
