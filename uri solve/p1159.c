#include<stdio.h>
int main()
{
    int a,b,c,d=0,i,j;
  while(1)
  {

      scanf("%d",&a);

 if(a==0)
 {
    break;
  }

    else if(a%2!=0)
    {    a++;
         for(i=0;i<5;i++)
    {
        d=d+a;
        a=a+2;
    }
    printf("%d\n",d);
    d=0;

    }
    else  if(a%2==0)
 {
     for(i=0;i<5;i++)
    {
        d=d+a;
        a=a+2;
    }
    printf("%d\n",d);
    d=0;
  }

}
}
