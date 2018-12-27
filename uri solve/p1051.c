#include<stdio.h>
int main()
{
  float a,b,c,d,e;
   scanf("%f",&a);
   if(a>=0.0&&a<=2000.0)
   {
    printf("Isento\n");

   }
   else if(a>=2000.0&&a<=3000.0)
   {
       b=a-2000.00;
       b=b*.08;

   printf("R$ %.2f\n",b);

   }
  else if(a>=3000.0&&a<=4500.0)
   {
        b=1000*.08;
       c=a-3000.00;
       d=c*.18;
       b=b+d;
   printf("R$ %.2f\n",b);

   }
   else
    {
        b=1500*.18;
         e=1000*.08;
       c=a-4500.00;
       d=c*.28;
       b=b+d+e;
   printf("R$ %.2f\n",b);
   }
}
