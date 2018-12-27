#include<Stdio.h>
int main()
{
    int a,b,c,d,e=0,f;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a==1)
        e=1;
    else if(b==1)
        e=2;
    else if(c==1)
        e=3;
    else
        e=4;
    printf("%d\n",e);
}
