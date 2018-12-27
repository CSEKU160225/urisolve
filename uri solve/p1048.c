#include<stdio.h>
int main()
{
  float a,b,c,d;
   scanf("%f",&a);
   if(a>=0.0&&a<=400.0)
   {
       b=a*.15;
       c=a+b;
      printf("Novo salario: %.2f\n",c);
      printf("Reajuste ganho: %.2f\n",b);
      printf("Em percentual: 15 %%\n");
   }
   else if(a>=4000.0&&a<=800.0)
   {
       b=a*.12;
       c=a+b;
      printf("Novo salario: %.2f\n",c);
      printf("Reajuste ganho: %.2f\n",b);
      printf("Em percentual: 12 %%\n");
   }
  else  if(a>=800.0&&a<=1200.0)
   {
       b=a*.10;
       c=a+b;
      printf("Novo salario: %.2f\n",c);
      printf("Reajuste ganho: %.2f\n",b);
      printf("Em percentual: 10 %%\n");
   }
   else  if(a>=1200.0&&a<=2000.0)
   {
       b=a*.07;
       c=a+b;
      printf("Novo salario: %.2f\n",c);
      printf("Reajuste ganho: %.2f\n",b);
      printf("Em percentual: 7 %%\n");
   }
   else  if(a>=2000.0)
   {
       b=a*.04;
       c=a+b;
      printf("Novo salario: %.2f\n",c);
      printf("Reajuste ganho: %.2f\n",b);
      printf("Em percentual: 4 %%\n");
   }
}
