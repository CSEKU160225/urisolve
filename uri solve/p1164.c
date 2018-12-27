#include<stdio.h>
int main()
{
    int a,b,i,j,d=0,c;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {

       scanf("%d",&b);
       c=b/2;d=0;
       for(j=1;j<=c;j++)
       {

       if(b%j==0)
       {
           d=d+j;
       }

    }

    if(d==b)
  {
      printf("%d eh perfeito\n",b);
  }
  else{
    printf("%d nao eh perfeito\n",b);
  }


    }

}
