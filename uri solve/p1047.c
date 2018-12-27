#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(b<d)
    {
        e=d-b;
        f=c-a;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f,e);
    }
    else if(b>d)
    {
        e=b-d;
        g=60-e;
        a=a+1;
        f=c-a;
         printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",f,g);
    }
    else if(a==c&&b==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
    }
}
