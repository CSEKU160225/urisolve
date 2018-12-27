
#include<stdio.h>
int main()
{

    int a,b=0,c,d,i,e=0,f=0;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {

        scanf("%d%d",&c,&d);
        if(c<d)
        {
            printf("%d\n",c);
        }
        else if(c==d){
            printf("1\n");
        }
        else if(c>d)
        {
            b=c/d;
            e=d*b;
            f=c-e;
            f=b+f;
            printf("%d\n",f);

        }
    }

}
