#include<stdio.h>
int main()
{
    int a,b,e=0,f=0,g=0,i,j;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {

            e=e+1;
            f=e+1;
            g=f+1;

        printf("%d %d %d PUM\n",e,f,g);
        g=g+1;
        e=g;

    }

}
