#include <stdio.h>
#include <stdbool.h>
int main()
{
    int i, j;
    char str[55];
   while( (gets(str)) != EOF)
   {
       bool b = true;

    for(i=0; i<=strlen(str); i++)
       {
           if(str[i]!=' ')
            {
                if(b)
                {
                    str[i] = toupper(str[i]);
                }
                else
                {
                    str[i] = tolower(str[i]);
                }
             b= !b;
            }
      }
     puts(str);

   }
   return 0;
}
