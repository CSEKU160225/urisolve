#include<stdio.h>
int main()
{

    int a,b,d,c,e;
    scanf("%d",&a);
    b=a/3600;
    c=b*3600;
    d=a-c;
      e=d/60;
    c=e*60;
    d=d-c;
printf("%d:%d:%d\n",b,e,d);
return 0;
}
