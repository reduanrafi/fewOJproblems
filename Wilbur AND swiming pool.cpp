#include <stdio.h>
#define abs(a) (a)>0?(a):-(a)
int main(){
int x0,y0,w=0,h=0;
int n;
scanf("%d\n",&n);
scanf("%d%d",&x0,&y0);
for (int i=1; i<n; i++){
    int x,y;
    scanf("%d%d",&x,&y);
    if (x!=x0) w=abs(x0-x);
    if (y!=y0) h=abs(y0-y);
}

if (w*h==0)
   printf("-1");
else
    printf("%d",w*h);
}
