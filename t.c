#include <stdio.h>
int main()
{
    int num1, num2, i, hcf=0;
    //printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    for(i=num1;i<=num2;i++)
    {
           /* Checking whether i is a factor of both number */
            hcf+=i;
    }
    printf( "%d", hcf);
    return 0;
}
