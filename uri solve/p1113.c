#include<stdio.h>
int main()
{
int a,b;
while(1){
scanf("%d%d",&a,&b);

if(b<a)
{
    printf("Decrescente\n");
}
else if(a<b)
{
    printf("Crescente\n");
}
else if(a==b)
{
    break;
}
}
}
