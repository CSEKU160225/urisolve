#include<stdio.h>
int main()
{
    int a=1,b=2,c=3,d=4,e=5;
    float f;
    int m,n;
    scanf("%d %d",&m,&n);

        if(m==1)
        {
            f=(float)(n*4.00);
            printf("Total: R$ %.2f\n",f);
        }
        else if(m==2)
        {
            f=(float)(n*4.50);
            printf("Total: R$ %.2f\n",f);
        }
     else if(m==3)
        {
            f=(float)(n*5.00);
            printf("Total: R$ %.2f\n",f);
        }
        else if(m==4)
        {
            f=(float)(n*2.00);
            printf("Total: R$ %.2f\n",f);
        }
        else if(m==5)
        {
            f=(float)(n*1.50);
            printf("Total: R$ %.2f\n",f);
        }
    }



