#include<stdio.h>
int main()
{

    int a,b,c=0,d=0,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {

        scanf("%d",&b);
        d=0;
        for(j=2;j<b;j++)
        {
            d=b%j;
            if(d==0)
            {
                c=1;
                break;
            }
            else{

                c=0;
            }
        }
        if(c==1)
           printf("%d nao eh primo\n",b);
        else
        printf("%d eh primo\n",b);

    }

}
