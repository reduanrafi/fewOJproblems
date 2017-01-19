#include<stdio.h>
int main(){
int n,a[100],i,pos=0;

printf("Enter Number");
scanf("%d",&n);

for(i=0;i<=n;i++){
scanf("%d",&a[i]);
}

printf("Enter the position you want to delete");
scanf("%d",&pos);
for(i=pos-1;i<n;i++)
{
    a[i]=a[i+1];

}
for(i=0;i<n-1;i++)
{
    printf("%d",a[i]);
}

return 0;
}
