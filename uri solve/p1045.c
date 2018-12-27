#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if((b>c)&&(d>a)&&(c+d)>(a+b)&&(a%2==0)&&(c>0.0)&&(d>0.0))
    {
        printf("Valores aceitos\n");
    }
    else
    {
        printf("Valores nao aceitos\n");

    }
}
