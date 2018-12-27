
#include<stdio.h>
int main()
{
int i,j;
float a,b=0,c=0,d;
while(1)
{
    scanf("%f",&a);
    if(a>=0.0)
    {
        c++;
        b=b+a;
    }
    else
    {
        break;
    }
}
d=b/c;
printf("%.2f\n",d);
}
