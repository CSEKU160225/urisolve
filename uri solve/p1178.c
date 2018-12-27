#include<stdio.h>
int main()
{

int i,j;
double a,b,c,n[100];
scanf("%lf",&a);
for(i=0;i<100;i++)
    {
      n[i]=a;
       a=a/2.00;
     //  printf("a= %lf\n",a);


    }
    for(i=0;i<100;i++)
    {
        c=n[i];
         //printf("c= %lf\n",c);
        printf("N[%d] = %.4lf\n",i,c);
    }
}
