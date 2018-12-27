#include<stdio.h>
int main()
{
  double a,b,c=0,i=0,g;
    while(1)
    {
        scanf("%lf",&a);
        if(a>=0.0 && a<=10.0)
        {
            i=i+1;
            c=c+a;
            g=c/2;
            if(i==2)
            {
                printf("media = %.2lf\n",g);
                break;
            }
    }


        else
        {
            printf("nota invalida\n");
        }

}
}
