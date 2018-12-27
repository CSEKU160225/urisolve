#include<stdio.h>
int main()
{
    int i,c=0,a;
    float b;
    for(i=0;i<6;i++)
    {
        scanf("%f",&b);
        if(b>0)
        {
            c++;
        }

    }
printf("%d valores positivos\n",c);

}
