#include<stdio.h>

int main()

{

            int i,j,s,temp,a[20];

            printf("Enter the number of element\n");

            scanf("%d",&s);

            printf("Enter %d elemnts\n",s);

            for(i=0;i<s;i++)

            scanf("%d",&a[i]);

            for(i=1;i<s;i++)

            {

                temp=a[i];

                j=i-1;

                while((temp<a[j])&&(j>=0))

                {

                    a[j+1]=a[j];

                    j=j-1;

                }

                a[j+1]=temp;

            }

            printf("After sorting\n");

            for(i=0;i<s;i++)

            printf("%d",a[i]);

}
