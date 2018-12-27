#include<stdio.h>
int main()
{
    int a,b=0,c=0,d=0,i;
    while(1)
    {
        scanf("%d",&a);

        if(a==1)
        {
            c=c+1;
        }
        else if(a==2){
            b=b+1;
        }
        else if(a==3)
        {
            d=d+1;
        }
        else if(a==4)
        {
            break;
        }

    }
   printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n",c);
    printf("Gasolina: %d\n",b);
      printf("Diesel: %d\n",d);

}
